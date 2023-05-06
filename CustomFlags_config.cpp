class CfgPatches
{
	class FinalDay_Flags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{"DZ_Data", "DZ_Gear_Camping", "DZ_Characters", "DayZExpansion_Scripts",};
	};
};
class CfgMods
{
	class FinalDay_Flags
	{
		dir = "FinalDay_Flags";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "FinalDay_Flags";
		credits = "Predator";
		author = "Predator";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FinalDay_Flags/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MyFlags/scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class Predators_Flag: Flag_Base
	{
		displayName = "Predators Flag";
		descriptionShort = "Predator Team Flags";
		color="PredatorsFlag"
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\PredatorsFlag.paa"
		};
    };
	class Flag_Base;
	class Hun_Flag: Flag_Base
	{
		displayName = "Hungarian Flag";
		descriptionShort = "Hungarian Flags";
		color="HunFlag"
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\Hun_Flag.paa"
		};
    };
    class Armband_ColorBase;
	class Predators_Armband: Armband_ColorBase
	{
		displayName="Predators Armband";
		descriptionShort="Predators team ";
		color="PredatorsArmband";
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa",
			"FinalDay_Flags\data\PredatorsFlag.paa"
		};
		class Crafting
		{
			displayName = "Predators Armband";
			tools[] =
			{
				"Knife",
				"CombatKnife",
				"HuntingKnife",
				"KitchenKnife",
				"SteakKnife"
			};
			components[] =
			{
				{"Predators_Flag", 1}
			};
			result[] =
			{
				"Predators_Armband", 3
			};
		};
	};
	class Hungarian_Armband: Armband_ColorBase
	{
		displayName="Hungarian Armband";
		descriptionShort="Hungarian team ";
		color="HungarianArmband";
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa",
			"FinalDay_Flags\data\Hun_Flag.paa"
		};
		class Crafting
		{
			displayName = "Hungarian Armband";
			tools[] =
			{
				"Knife",
				"CombatKnife",
				"HuntingKnife",
				"KitchenKnife",
				"SteakKnife"
			};
			components[] =
			{
				{"Hun_Flag", 1}
			};
			result[] =
			{
				"Hungarian_Armband", 3
			};
		};
	};
};
