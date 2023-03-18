/*
	* Author: Franky
	* Function to get the near ctrl to a position
	*
	* Arguments:
	* 0: <ARRAY> Position
	* 1: <ARRAY> Controls
	*
	* Return Value:
	* 0: <CONTROL> Control
	*
	* Example:
	* [[0, 0], [Ctrl1, Ctrl2, Ctrl3]] call lince_gachapon_fnc_calculateNearCtrl
	*
	* Public: No
*/

params ["_pos","_ctrls"];

private _nearCtrl = _ctrls select 0;

{
if (([(ctrlPosition _x select 0), (ctrlPosition _x select 1)] distance _pos) < ([(ctrlPosition _nearCtrl select 0), (ctrlPosition _nearCtrl select 1)] distance _pos)) then {
		_nearCtrl = _x;
	};
} forEach _ctrls;

_nearCtrl