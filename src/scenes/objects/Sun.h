#pragma once

#include <raylib.h>
#include "Object.h"


class Sun : public Object {
private:
  Texture sprite;
public:
  void Load();
  void Unload();
  void Update();
  void Draw();
};

