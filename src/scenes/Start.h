#pragma once

#include <raylib.h>
#include "ui/Button.h"


class Start {
private:
  Button play;
  Button settings;
  Button credits;
public:
  void Load();
  void Unload();
  void Update(int& currentScene, Vector2& mousePosition);
  void Render();
};
