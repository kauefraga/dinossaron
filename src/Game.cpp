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
  settingsScene.Load();
}

void Game::UnloadAndClose() {
  startScene.Unload();
  creditsScene.Unload();
  gameplayScene.Unload();
  settingsScene.Unload();

  CloseAudioDevice();
  CloseWindow();
}

void Game::Update() {
  mousePosition = GetMousePosition();

  if (currentScene == 0) startScene.Update(currentScene, mousePosition);
  if (currentScene == 1) creditsScene.Update(currentScene, mousePosition);
  if (currentScene == 2) gameplayScene.Update(GRAVITY);
  if (currentScene == 3) settingsScene.Update(currentScene, mousePosition);
}

void Game::Render() {
  BeginDrawing();
  ClearBackground(WHITE);

  if (currentScene == 0) startScene.Render();
  if (currentScene == 1) creditsScene.Render();
  if (currentScene == 2) gameplayScene.Render();
  if (currentScene == 3) settingsScene.Render();

  EndDrawing();
}

bool Game::IsRunning() {
  if (!WindowShouldClose()) {
    return true;
  }

  return false;
}
