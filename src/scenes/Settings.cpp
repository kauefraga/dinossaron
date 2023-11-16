#include "Settings.h"

void Settings::Load() {
  back.Load(
    Vector2{
      160.0f,
      GetScreenHeight() - 72.0f
    },
    "resources/sprites/ui/back.png"
  );
}

void Settings::Unload() {
  back.Unload();
}

void Settings::Update(int& currentScene, Vector2& mousePosition) {
  back.Update(mousePosition);

  if (back.IsPressed()) {
    back.PlayConfirmationSound();
    currentScene = 0;
  }

  if (IsKeyDown(KEY_ESCAPE)) {
    currentScene = 0;
  }
}

void Settings::Render() {
  back.Draw();
}
