#pragma once

#include <raylib.h>
#include "Background.h"
#include "entities/Dino.h"


class Gameplay {
private:
  Background background;
  Dino dino;
public:
  void Load();
  void Unload();
  void Update(const float& GRAVITY);
  void Render();
};

