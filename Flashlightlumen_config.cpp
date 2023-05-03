class CfgPatches
{
    class IncreasedFlashlightBrightness
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMagazines
{
    class Battery9V;
    class Mag_flashlight: Battery9V
    {
        brightness = 8; // növelheted a fényerőt, 8 az alapérték helyett
    };
};

class cfgWeapons
{
    class Inventory_Base;
    class Flashlight_Base: Inventory_Base
    {
        scope = 1;
        brightness = 8; // növelheted a fényerőt, 8 az alapérték helyett
    };
    class UniversalLight: Flashlight_Base
    {
        scope = 2;
        brightness = 12; // növelheted a fényerőt, 12 az alapérték helyett
    };
    class Headtorch: Flashlight_Base
    {
        scope = 2;
        brightness = 10; // növelheted a fényerőt, 10 az alapérték helyett
    };
    class Torch: Flashlight_Base
    {
        scope = 2;
        brightness = 14; // növelheted a fényerőt, 14 az alapérték helyett
    };
};
/*
Ez az IncreasedFlashlightBrightness elnevezésű CfgPatches-ben található, és a szükséges elemeket tartalmazza. Az IncreasedFlashlightBrightness osztály nem tartalmaz semmilyen egységet vagy fegyvert, és nem igényel semmilyen más kiegészítést.

A CfgMagazines osztály felülírja az alapvető Mag_flashlight magazint, és növeli a fényerőt a 8-as alapértékről.

A cfgWeapons osztályban felülírjuk az alapvető Flashlight_Base osztályt, amelyet minden lámpa használ, és növeljük a fényerőt az alapérték helyett a UniversalLight, Headtorch és Torch fegyvereknél. */
