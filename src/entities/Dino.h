#pragma once

#include <raylib.h>
#include "Entity.h"


class Dino : public Entity {
private:
  const int WIDTH = 50;
  const int HEIGHT = 50;
  const float JUMP_FORCE = 8.0f;
  bool isOnFloor;
public:
  void Load();
  void Unload();

  void Update(const float &GRAVITY);
  void Draw();
};

bool IsJumpKeyDown();
