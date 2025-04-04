// Generated using https://github.com/a2x/cs2-dumper
// 2025-03-12 10:09:08.200602900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace offsets {
        // Module: client.dll
        namespace client_dll {
            constexpr std::ptrdiff_t dwCSGOInput = 0x1AAD6D0;
            constexpr std::ptrdiff_t dwEntityList = 0x1A37A30;
            constexpr std::ptrdiff_t dwGameEntitySystem = 0x1B5E798;
            constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x20F0;
            constexpr std::ptrdiff_t dwGameRules = 0x1A9E850;
            constexpr std::ptrdiff_t dwGlobalVars = 0x187FC90;
            constexpr std::ptrdiff_t dwGlowManager = 0x1A9E870;
            constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A890C0;
            constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x188BF30;
            constexpr std::ptrdiff_t dwPlantedC4 = 0x1AA8A10;
            constexpr std::ptrdiff_t dwPrediction = 0x188BDB0;
            constexpr std::ptrdiff_t dwSensitivity = 0x1A9FE48;
            constexpr std::ptrdiff_t dwSensitivity_sensitivity = 0x40;
            constexpr std::ptrdiff_t dwViewAngles = 0x1AADAA0;
            constexpr std::ptrdiff_t dwViewMatrix = 0x1AA3810;
            constexpr std::ptrdiff_t dwViewRender = 0x1AA4020;
            constexpr std::ptrdiff_t dwWeaponC4 = 0x1A3BCB0;
        }
        // Module: engine2.dll
        namespace engine2_dll {
            constexpr std::ptrdiff_t dwBuildNumber = 0x540BE4;
            constexpr std::ptrdiff_t dwNetworkGameClient = 0x53FCE0;
            constexpr std::ptrdiff_t dwNetworkGameClient_clientTickCount = 0x368;
            constexpr std::ptrdiff_t dwNetworkGameClient_deltaTick = 0x27C;
            constexpr std::ptrdiff_t dwNetworkGameClient_isBackgroundMap = 0x281447;
            constexpr std::ptrdiff_t dwNetworkGameClient_localPlayer = 0xF0;
            constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x238;
            constexpr std::ptrdiff_t dwNetworkGameClient_serverTickCount = 0x36C;
            constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x228;
            constexpr std::ptrdiff_t dwWindowHeight = 0x62351C;
            constexpr std::ptrdiff_t dwWindowWidth = 0x623518;
        }
        // Module: inputsystem.dll
        namespace inputsystem_dll {
            constexpr std::ptrdiff_t dwInputSystem = 0x387E0;
        }
        // Module: matchmaking.dll
        namespace matchmaking_dll {
            constexpr std::ptrdiff_t dwGameTypes = 0x1A3190;
            constexpr std::ptrdiff_t dwGameTypes_mapName = 0x120;
        }
        // Module: soundsystem.dll
        namespace soundsystem_dll {
            constexpr std::ptrdiff_t dwSoundSystem = 0x3A15F0;
            constexpr std::ptrdiff_t dwSoundSystem_engineViewData = 0x7C;
        }
    }
}
