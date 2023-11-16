#include "Sun.h"

void Sun::Load() {
  width = 128;
  height = 128;

  sprite = LoadTexture("resources/sprites/objects/sun.png");

  source = Rectangle{ 0, 0, (float) width, (float) height };
  destination = Rectangle{
    GetScreenWidth() / 1.5f,
    (float) height,
    (float) width,
    (float) height
  };
}

void Sun::Unload() {
  UnloadTexture(sprite);
}

void Sun::Update() {
}

void Sun::Draw() {
  DrawTexturePro(
    sprite,
    source,
    destination,
    Vector2{ 0, 0 },
    0 ,
    WHITE
  );
}
