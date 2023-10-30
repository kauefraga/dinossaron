#include "Background.h"

void Background::Load() {
  background = LoadTexture("resources/background.png");

  offset = Vector2{ 0, 0 };
}

void Background::Unload() {
  UnloadTexture(background);
}

void Background::Update() {
  offset.x += GetFrameTime() * 300;
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
}
