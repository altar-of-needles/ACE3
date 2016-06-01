#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Winter", "Jonpas", "Arkhir"};
        PBO_URL
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_Settings.hpp"
#include "CfgVehicles.hpp"
