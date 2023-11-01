#include "Game.h"


Game::Game() {
  Game::InitializeWindow();
  Game::LoadResources();
}

void Game::InitializeWindow() {
  InitWindow(Game::SCREEN_WIDTH, Game::SCREEN_HEIGHT, "Dinossaron");
  InitAudioDevice();
  SetExitKey(KEY_NULL);
  SetTargetFPS(120);

  Image icon = LoadImage("resources/icon.png");
  SetWindowIcon(icon);
  UnloadImage(icon);
}

void Game::LoadResources() {
  currentScene = 0;
  startScene.Load();
  creditsScene.Load();
  gameplayScene.Load();
}

void Game::UnloadAndClose() {
  startScene.Unload();
  creditsScene.Unload();
  gameplayScene.Unload();

  CloseAudioDevice();
  CloseWindow();
}

void Game::Update() {
  mousePosition = GetMousePosition();

  if (currentScene == 0) startScene.Update(currentScene, mousePosition);
  if (currentScene == 1) creditsScene.Update(currentScene, mousePosition);
  if (currentScene == 2) gameplayScene.Update(GRAVITY);
}

void Game::Render() {
  BeginDrawing();
  ClearBackground(WHITE);

  if (currentScene == 0) startScene.Render();
  if (currentScene == 1) creditsScene.Render();
  if (currentScene == 2) gameplayScene.Render();

  EndDrawing();
}

bool Game::IsRunning() {
  if (!WindowShouldClose()) {
    return true;
  }

  return false;
}
