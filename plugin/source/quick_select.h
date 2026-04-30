#pragma once
#include <wups/button_combo/defines.h>

#define BUTTON_COMBO_QUICK_SELECT_CONFIG_ID_DEPRECATED "quickSelectCombo"
#define BUTTON_COMBO_QUICK_SELECT_CONFIG_ID "quickSelectComboV2"
#define BUTTON_COMBO_TOGGLE_EMULATION_CONFIG_ID_DEPRECATED "toggleEmulationCombo"
#define BUTTON_COMBO_TOGGLE_EMULATION_CONFIG_ID "toggleEmulationComboV2"

constexpr WUPSButtonCombo_Buttons QUICK_SELECT_BUTTON_COMBO_DEFAULT = static_cast<WUPSButtonCombo_Buttons>(0);
constexpr WUPSButtonCombo_Buttons TOGGLE_EMULATION_BUTTON_COMBO_DEFAULT = static_cast<WUPSButtonCombo_Buttons>(0);

// Set it to something weird.
constexpr WUPSButtonCombo_Buttons QUICK_SELECT_BUTTON_COMBO_FALLBACK = WUPS_BUTTON_COMBO_BUTTON_1 | WUPS_BUTTON_COMBO_BUTTON_TV | WUPS_BUTTON_COMBO_BUTTON_RESERVED_BIT;
constexpr WUPSButtonCombo_Buttons TOGGLE_EMULATION_BUTTON_COMBO_FALLBACK = WUPS_BUTTON_COMBO_BUTTON_2 | WUPS_BUTTON_COMBO_BUTTON_TV | WUPS_BUTTON_COMBO_BUTTON_RESERVED_BIT;

extern WUPSButtonCombo_ComboHandle sQuickSelectButtonComboHandle;
extern WUPSButtonCombo_ComboHandle sToggleEmulationButtonComboHandle;

void migrateStorage();
void RegisterButtonCombos();