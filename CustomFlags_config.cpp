class CfgPatches
{
	class <MyModNeve>
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{"DZ_Data", "DZ_Gear_Camping", "DZ_Characters",};
	};
};
class CfgMods
{
	class <MyModNeve>
	{
		dir = "<MyModNeve>";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "<MyModNeve>";
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
				files[] = {"<MyModNeve>/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"<MyModNeve>/scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class <MyFlagNeve>: Flag_Base
	{
		displayName = "Predators Flag";
		descriptionShort = "Predator Team Flags";
		color="PredatorsFlag"
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"<MyModNeve>\data\PredatorsFlag.paa"
		};
    };
	class Flag_Base;
	class <MyFlagNeve2>: Flag_Base
	{
		displayName = "<MyFlagNeve2>";
		descriptionShort = "<MyFlagNeve2>";
		color="<MyFlagNeve2>"
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"<MyFlagNeve2>\data\Hun_Flag.paa"
		};
          };
    };
    class Armband_ColorBase;
	class <MyArmbandNeve>: Armband_ColorBase
	{
		displayName="<MyArmbandNeve>";
		descriptionShort="<MyArmbandNeve> ";
		color="<MyArmbandNeve>";
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa",
			"<MyArmbandNeve>\data\PredatorsFlag.paa"
		};
	};
	class <MyArmbandNeve2>: Armband_ColorBase
	{
		displayName="<MyArmbandNeve2>";
		descriptionShort="<MyArmbandNeve2> team ";
		color="<MyArmbandNeve2>";
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa",
			"<MyArmbandNeve2>\data\Hun_Flag.paa"
		};
	    };
	
      };
};
