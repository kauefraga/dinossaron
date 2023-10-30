#pragma once

#include <raylib.h>


class Background {
private:
  Texture background;
  Vector2 offset;
public:
  void Load();
  void Unload();
  void Update();
  void Draw();
};

