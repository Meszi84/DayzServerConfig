class CfgPatches
{
    class MyMod
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={};
    };
};

class CfgVehicles
{
    class Fishing_Boat;
    class Fishing_Boat_Small: Fishing_Boat
    {
        class Fishing
        {
            class Fish
            {
                /* Itt növelhetjük a halfogás esélyét, az alapérték 0.5 (50%) */
                probability = 0.75; // 75%
            };
        };
    };
};
