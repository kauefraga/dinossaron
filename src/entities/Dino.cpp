#include "Dino.h"


void Dino::Load() {
  width = 128;
  height = 128;
  velocity_y = 0;

  sprite = LoadTexture("resources/sprites/dinossaron/cat.png");

  source = Rectangle{ 0, 0, (float) width, (float) height };
  destination = Rectangle{
    GetScreenWidth() / 5.0f,
    GetScreenHeight() - height - 70.0f,
    (float) width,
    (float) height
  };
}

void Dino::Unload() {
  UnloadTexture(sprite);
}

void Dino::Update(const float& GRAVITY) {
  velocity_y += GRAVITY * GetFrameTime();
  destination.y += velocity_y;

  if (IsJumpKeyDown() && isOnFloor) {
    velocity_y = -JUMP_FORCE;
    isOnFloor = false;
  }

  if (CheckCollisionRecs(
    destination,
    Rectangle{ 0.0f, GetScreenHeight() - 70.0f, (float) GetScreenWidth(), (float) GetScreenHeight() }
  )) {
    destination.y = GetScreenHeight() - height - 70.0f;
    isOnFloor = true;
  }
}

void Dino::Draw() {
  DrawTexturePro(
    sprite,
    source,
    destination,
    Vector2{ 0, 0 },
    0,
    WHITE
  );
}

bool IsJumpKeyDown() {
  if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP) || IsKeyDown(KEY_SPACE)) {
    return true;
  }

  return false;
}
