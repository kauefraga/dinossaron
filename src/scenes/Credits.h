#pragma once

#include <raylib.h>
#include "ui/Button.h"


class Credits {
private:
  Button back;
public:
  void Load();
  void Unload();
  void Update(int& currentScene, Vector2& mousePosition);
  void Render();
};
