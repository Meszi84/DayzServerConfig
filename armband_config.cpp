class CfgPatches
{
	class FinalDay_Armbrand
	{
		units[]=
		{
			"Predators_Armbrand",
			"Hungarian_Armbrand"
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
    class Armband_ColorBase;
	class Predators_Armband: Armband_ColorBase
	{
		displayName="Predators Armband";
		descriptionShort="Predators team ";
		color="PredatorsArmband";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\PredatorsFlag.paa"
		};
	};
	class Hungarian_Armband: Armband_ColorBase
	{
		displayName="Hungarian Armband";
		descriptionShort="Hungarian team ";
		color="HungarianArmband";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"FinalDay_Flags\data\Hun_Flag.paa"
		};
	};
};
/* Create data map and add armbrand.paa */
