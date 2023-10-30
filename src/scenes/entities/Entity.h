#pragma once

#include <raylib.h>


class Entity {
public:
  int width;
  int height;
  float velocity_x;
  float velocity_y;
  Rectangle source;
  Rectangle destination;
};
