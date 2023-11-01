#pragma once

#include <raylib.h>


class Button {
private:
  Rectangle source;
  Rectangle bounds;

  Texture texture;
  const int frameCount = 3;
  float frameWidth;

  // NONE = 0, HOVERED, PRESSED
  int state;
  bool action;

  Sound confirmation;
public:
  void Load(
    Vector2 position,
    const char* filePath
  );
  void Unload();
  void Update(Vector2& mousePosition);
  void Draw();

  bool IsPressed();
  void PlayConfirmationSound();
};

