#include "Dino.h"


void Dino::Load() {
  sprite = LoadTexture("resources/icon.png");

  x = GetScreenWidth() / 6.0f;
  y = GetScreenHeight() - sprite.height - 20.0f;
  velocity_y = 0;
}

void Dino::Unload() {
  UnloadTexture(sprite);
}

void Dino::Update(const float &GRAVITY) {
  velocity_y += GRAVITY * GetFrameTime();
  y += velocity_y;

  if (IsJumpKeyDown() && isOnFloor) {
    velocity_y = -JUMP_FORCE;
    isOnFloor = false;
  }

  if (CheckCollisionRecs(
    Rectangle{ x, y, (float) sprite.width, (float) sprite.height },
    Rectangle{ 0.0f, GetScreenHeight() - 20.0f, (float) GetScreenWidth(), (float) GetScreenHeight() }
  )) {
    y = GetScreenHeight() - sprite.height - 20.0f;
    isOnFloor = true;
  }
}

void Dino::Draw() {
  DrawTexture(
    sprite,
    (int) x,
    (int) y,
    WHITE
  );
}

bool IsJumpKeyDown() {
  if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP) || IsKeyDown(KEY_SPACE)) {
    return true;
  }

  return false;
}
