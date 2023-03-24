#include "script_component.hpp"
/*
    * Author: Franky
    * Function to start the animation of the gachapon
    *
    * Arguments:
    * None
    *
    * Return Value:
    * None
    *
    * Example:
    * call lince_gachapon_fnc_anim
    *
    * Public: No
*/

// Create display for the gachapon
titleRsc ["RscGachapon", "PLAIN"];
private _display = uiNamespace getVariable "RscGachapon";

// get all the entries of CfgWeapons
private _weapons = configFile >> "CfgWeapons";
private _hashMapWeapons = createHashMap;

// Loop every entry and add it to the hashmap
private _blackListItems = ["dogtag"];
{
    private _weapon = _x;
    private _weaponName = getText (_weapon >> "displayName");
    private _weaponPicture = getText (_weapon >> "picture");
    private _configName = configName _weapon;
    if (_weaponPicture != "" && !({
        _configName find _x > -1
    } count _blackListItems > 0)) then {
        _hashMapWeapons set [_weaponName, [_weaponPicture, _configName]];
    };
} forEach ("true" configClasses _weapons);

uiNamespace setVariable ["lince_gachapon_stop", false];

// get all the controls but the two first (background and central line)
private _ctrlItems = allControls _display select [2, count allControls _display];

// Define the speed to move the items from the right to the left
private _speed = (1/10000);

// Define the center line position
private _centerLineX = safeZoneX + safeZoneW * 0.49375;
private _centerLineY = safeZoneY + safeZoneH * 0.44074075;

// Define the end position
private _endPos = safeZoneX - 0.2;

[_ctrlItems, _speed, _endPos, _centerLineX, _centerLineY, _hashMapWeapons] spawn {
    params ["_ctrlItems", "_speed", "_endPos", "_centerLineX", "_centerLineY", "_hashMapWeapons"];
    // Loop every item and move it from the right to the left until lince_gachapon_stop is true
    playSound "lince_gachapon_open";
    while { !(uiNamespace getVariable "lince_gachapon_stop") } do {
        {
            private _randomWeaponSelection = _hashMapWeapons get (selectRandom (keys _hashMapWeapons));
            _x ctrlSetText (_randomWeaponSelection select 0);
            _x setVariable ["lince_gachapon_configName", (_randomWeaponSelection select 1)];
            _x ctrlCommit 0;
            _x ctrlSetPosition [_endPos, ctrlPosition _x select 1];
            _x ctrlCommit _speed;
            sleep (_speed / (count _ctrlItems));
            [_x, _centerLineX] spawn {};
            [_x, _centerLineX] spawn {
                // Play a sound when is on the center line
                waitUntil {
                    ((ctrlPosition (_this select 0)) select 0) < (_this select 1)
                };
                playSound "lince_gachapon_click";
                waitUntil {
                    ctrlCommitted (_this select 0)
                };
                if (uiNamespace getVariable "lince_gachapon_stop") exitWith {};
                (_this select 0) ctrlSetPosition [safeZoneX + safeZoneW + 0.1, ctrlPosition (_this select 0) select 1];
                (_this select 0) ctrlCommit 0;
            };
            _speed = _speed + 1.5;

            if (_speed > 20 && !(uiNamespace getVariable "lince_gachapon_stop")) exitWith {
                uiNamespace setVariable ["lince_gachapon_stop", true];
                private _ctrlSelected = [[_centerLineX, _centerLineY], _ctrlItems] call lince_gachapon_fnc_calculateNearCtrl;
                private _distanceX = abs (_centerLineX - ((ctrlPosition _ctrlSelected) select 0));
                private _randomPosition = random[-0.1, 0, 0.1];
                _ctrlSelected ctrlSetPositionX (_centerLineX -_randomPosition);
                _ctrlSelected ctrlCommit 0.7;
                {
                    _x ctrlSetPosition [(ctrlPosition _x select 0) - _distanceX - _randomPosition, ctrlPosition _x select 1];
                    _x ctrlCommit 0.7;
                } forEach _ctrlItems;
                playSound "lince_gachapon_end";
                diag_log (_ctrlSelected getVariable "lince_gachapon_configName");
            };
        } forEach _ctrlItems;
    };
};