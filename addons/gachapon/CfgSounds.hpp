class CfgSounds
{
	sounds[] = {};
	class GVAR(open)
	{
		name = QGVAR(open);
		sound[] = { QUOTE(PATHTOF(data\sounds\open.ogg)), 10, 1 };
		titles[] = {};
	};

	class GVAR(click)
	{
		name = QGVAR(click);
		sound[] = { QUOTE(PATHTOF(data\sounds\click.ogg)), 10, 1 };
		titles[] = {};
	};

	class GVAR(end)
	{
		name = QGVAR(end);
		sound[] = { QUOTE(PATHTOF(data\sounds\end.ogg)), 10, 1 };
		titles[] = {};
	};
};