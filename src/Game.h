#pragma once

#include <raylib.h>
#include "scenes/Start.h"
#include "scenes/Credits.h"
#include "scenes/Gameplay.h"


class Game {
private:
  const int SCREEN_WIDTH = 1280;
  const int SCREEN_HEIGHT = 720;
  const float GRAVITY = 9.8f;

  Vector2 mousePosition;

  // START = 0, CREDITS, GAMEPLAY, GAMEOVER, SETTINGS, MENU
  int currentScene;
  Start startScene;
  Credits creditsScene;
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

