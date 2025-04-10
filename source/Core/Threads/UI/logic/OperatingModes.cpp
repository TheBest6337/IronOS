#include "OperatingModes.h"
#include "ui_drawing.hpp"

OperatingMode handleFallingMode(const ButtonState buttons, guiContext *cxt) {
  // Display a warning message when the soldering iron is falling
  ui_draw_warning_message("Warning: Falling!");

  // Return to the previous mode when the user presses a button
  if (buttons != BUTTON_NONE) {
    return cxt->previousMode;
  }

  return OperatingMode::Falling;
}
