#include "Background.h"


void Background::Load() {
  background = LoadTexture("resources/background.png");
  sun.Load();

  offset = Vector2{ 0, 0 };
}

void Background::Unload() {
  sun.Unload();
  UnloadTexture(background);
}

void Background::Update() {
  offset.x += GetFrameTime() * 300;

  sun.Update();
}

void Background::Draw() {
  DrawTexturePro(
    background,
    Rectangle{ offset.x, offset.y, (float) GetScreenWidth(), (float) GetScreenHeight() },
    Rectangle{ 0, 0, (float) GetScreenWidth(), (float) GetScreenHeight() },
    Vector2{ 0, 0 },
    0,
    WHITE
  );
  sun.Draw();
}
