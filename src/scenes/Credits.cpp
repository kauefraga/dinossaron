#include "Credits.h"


void Credits::Load() {
  back.Load(
    Vector2{
      160.0f,
      GetScreenHeight() - 72.0f
    },
    "resources/sprites/ui/back.png"
  );
}

void Credits::Unload() {
  back.Unload();
}

void Credits::Update(int& currentScene, Vector2& mousePosition) {
  back.Update(mousePosition);

  if (back.IsPressed()) {
    back.PlayConfirmationSound();
    currentScene = 0;
  }

  if (IsKeyDown(KEY_ESCAPE)) {
    currentScene = 0;
  }
}

void Credits::Render() {
  back.Draw();

  DrawText(
    "Credits",
    GetScreenWidth() / 2 - MeasureText("Credits", 80) / 2,
    GetScreenHeight() / 8,
    80,
    BLACK
  );

  DrawText(
    "Kauê Fraga Rodrigues - Game Developer",
    GetScreenWidth() / 2 - MeasureText("Kauê Fraga Rodrigues - Game Developer", 40) / 2,
    (int) (GetScreenHeight() / 2.5f),
    40,
    BLACK
  );
  DrawText(
    "Aron <3 - Main Artist",
    GetScreenWidth() / 2 - MeasureText("Aron <3 - Main Artist", 40) / 2,
    GetScreenHeight() / 2,
    40,
    BLACK
  );

  DrawText(
    "Thank you for playing!",
    GetScreenWidth() / 2 - MeasureText("Thank you for playing!", 30) / 2,
    (int) (GetScreenHeight() / 1.1f),
    30,
    BLACK
  );
}
