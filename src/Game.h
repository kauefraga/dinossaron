#pragma once

#include <raylib.h>
#include "scenes/Gameplay.h"


class Game {
private:
  const int SCREEN_WIDTH = 1280;
  const int SCREEN_HEIGHT = 720;
  const float GRAVITY = 9.8f;

  int currentScene; // START = 0, GAMEPLAY, MENU 
  Gameplay gameplayScene;
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

