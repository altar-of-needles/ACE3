#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"R3F_Armes", "R3F_Acc"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Ruthberg"};
        PBO_URL
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
