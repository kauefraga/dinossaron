#include "Button.h"

void Button::Load(
  Vector2 position,
  const char* filePath
) {
  texture = LoadTexture(filePath);

  frameWidth = (float) texture.width / frameCount;
  source = Rectangle{
    0,
    0,
    frameWidth,
    (float) texture.height
  };
  bounds = Rectangle{
    position.x - frameWidth / 2.0f,
    position.y - texture.height / 2.0f,
    frameWidth,
    (float) texture.height
  };

  state = 0;
  action = false;

  confirmation = LoadSound("resources/sounds/ui/confirmation.ogg");
}

void Button::Unload() {
  UnloadTexture(texture);
  UnloadSound(confirmation);
}

void Button::Update(Vector2& mousePosition) {
  action = false;

  if (CheckCollisionPointRec(mousePosition, bounds)) {
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) state = 2;
    else state = 1;

    if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) action = true;
  }
  else state = 0;

  source.x = frameWidth * state;
}

void Button::Draw() {
  source.x = frameWidth * state;

  DrawTextureRec(
    texture,
    source,
    Vector2{
      bounds.x,
      bounds.y
    },
    WHITE
  );
}

bool Button::IsPressed() {
  if (action) {
    return true;
  }

  return false;
}

void Button::PlayConfirmationSound() {
  PlaySound(confirmation);
}
