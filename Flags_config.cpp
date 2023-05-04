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
};

/* 512x256 
