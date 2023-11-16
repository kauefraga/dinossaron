#include "Start.h"


void Start::Load() {
  play.Load(
    Vector2{
      GetScreenWidth() / 2.0f,
      GetScreenHeight() / 2.0f,
    },
    "resources/sprites/ui/play.png"
  );
  settings.Load(
    Vector2{
      GetScreenWidth() / 2.0f,
      GetScreenHeight() / 2.0f * 1.3f,
    },
    "resources/sprites/ui/settings.png"
  );
  credits.Load(
    Vector2{
      GetScreenWidth() / 2.0f,
      GetScreenHeight() / 2.0f * 1.6f,
    },
    "resources/sprites/ui/credits.png"
    );
}

void Start::Unload() {
  play.Unload();
  settings.Unload();
  credits.Unload();
}

void Start::Update(int& currentScene, Vector2& mousePosition) {
  play.Update(mousePosition);
  settings.Update(mousePosition);
  credits.Update(mousePosition);

  if (play.IsPressed()) {
    play.PlayConfirmationSound();
    currentScene = 2;
  }

  if (settings.IsPressed()) {
    settings.PlayConfirmationSound();
    currentScene = 3;
  }

  if (credits.IsPressed()) {
    credits.PlayConfirmationSound();
    currentScene = 1;
  }
}

void Start::Render() {
  DrawText(
    "Dinossaron",
    GetScreenWidth() / 2 - MeasureText("Dinossaron", 120) / 2,
    GetScreenHeight() / 8,
    120,
    Color{ 98, 73, 218, 255 }
  );

  play.Draw();
  settings.Draw();
  credits.Draw();
}
