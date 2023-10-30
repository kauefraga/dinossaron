#pragma once

#include <raylib.h>
#include "Entity.h"


class Dino : public Entity {
private:
  const float JUMP_FORCE = 4.0f;
  bool isOnFloor;

  Texture sprite;
public:
  void Load();
  void Unload();

  void Update(const float& GRAVITY);
  void Draw();
};

bool IsJumpKeyDown();
