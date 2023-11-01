#pragma once

#include <raylib.h>
#include "ui/Button.h"


class Start {
private:
  Vector2 mousePosition;

  Button play;
  Button settings;
  Button credits;
public:
  void Load();
  void Unload();
  void Update(int& currentScene);
  void Render();
};
