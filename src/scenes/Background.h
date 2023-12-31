#pragma once

#include <raylib.h>
#include "objects/Sun.h" 


class Background {
private:
  Texture background;
  Vector2 offset;

  Sun sun;
public:
  void Load();
  void Unload();
  void Update();
  void Draw();
};

