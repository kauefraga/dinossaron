#pragma once

#include <raylib.h>
#include "entities/Dino.h"


class Game {
private:
  const int SCREEN_WIDTH = 1280;
  const int SCREEN_HEIGHT = 720;
  const float GRAVITY = 9.8f * 2.0f;

  Dino dino;
public:
  Game();

  // Resources management
  void InitializeWindow();
  void LoadResources();
  void UnloadAndClose();

  // Update and draw everything
  void Update();
  void Render();

  bool IsRunning();
};

