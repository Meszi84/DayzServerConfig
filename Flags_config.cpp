class CfgPatches
{
	class YourModName
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class YourFlagName: Flag_Base
	{
		displayName = "YourFlagName";
		descriptionShort = "YourFlagName";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"nameofprojectfolder\data\nameofyourflagfile.paa"
		};
        };
	class Armband_ColorBase;
	class Predators_Armband: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\PredatorsFlag.paa"
		};
	};
};
};

/* 512x256 
