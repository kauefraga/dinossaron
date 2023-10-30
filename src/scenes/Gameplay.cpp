#include "Gameplay.h"


void Gameplay::Load() {
  background.Load();
  dino.Load();
}

void Gameplay::Unload() {
  background.Unload();
  dino.Unload();
}

void Gameplay::Update(const float& GRAVITY) {
  background.Update();
  dino.Update(GRAVITY);
}

void Gameplay::Render() {
  background.Draw();
  dino.Draw();
}
