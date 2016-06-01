#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"KoffeinFlummi","commy2"};
        PBO_URL
        VERSION_CONFIG;
    };
};

#include "CfgAISkill.hpp"
#include "CfgWeapons.hpp"
