#include "Game.h"


Game::Game() {
  Game::InitializeWindow();
  Game::LoadResources();
}

void Game::InitializeWindow() {
  InitWindow(Game::SCREEN_WIDTH, Game::SCREEN_HEIGHT, "Dinossaron");
  SetExitKey(KEY_NULL);
  SetTargetFPS(120);

  Image icon = LoadImage("resources/icon.png");
  SetWindowIcon(icon);
  UnloadImage(icon);
}

void Game::LoadResources() {
  currentScene = 0;
  gameplayScene.Load();
}

void Game::UnloadAndClose() {
  gameplayScene.Unload();

  CloseWindow();
}

void Game::Update() {
  gameplayScene.Update(GRAVITY);
}

void Game::Render() {
  BeginDrawing();
  ClearBackground(WHITE);

  if (currentScene == 0) gameplayScene.Render();

  EndDrawing();
}

bool Game::IsRunning() {
  if (!WindowShouldClose()) {
    return true;
  }

  return false;
}
