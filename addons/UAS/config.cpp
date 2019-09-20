#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		name = COMPONENT;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_common",
							"cba_events",
							"cba_settings",
							"cba_statemachine",
							"cba_xeh"};
		author = "UVO Team";
		authors[] = {"Gokmen", "Sceptre"};
		url = "https://github.com/the0utsider/unit-voiceovers";
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
