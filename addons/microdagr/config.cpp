#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_microDAGR_Item"};
        weapons[] = {"ACE_microDAGR"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"PabstMirror"};
        PBO_URL
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "gui.hpp"
#include "ACE_Settings.hpp"
