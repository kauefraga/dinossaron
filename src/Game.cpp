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
}

void Game::UnloadAndClose() {
  CloseWindow();
}

void Game::Update() {

}

void Game::Render() {
  BeginDrawing();
  ClearBackground(RAYWHITE);

  DrawText(
    "Dinossaron",
    GetScreenWidth() / 2 - MeasureText("Dinossaron", 80) / 2,
    GetScreenHeight() / 4,
    80,
    BLACK
  );

  EndDrawing();
}

bool Game::IsRunning() {
  if (!WindowShouldClose()) {
    return true;
  }

  return false;
}
