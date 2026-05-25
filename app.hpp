#pragma once

#include "pipeline.hpp"
#include "window.hpp"

namespace mvce {

class App {
public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

private:
  Window window{WIDTH, HEIGHT, "Hello!"};
  Pipeline pipeline{"shaders/basic_shader.vert", "shaders/basic_shader.frag"};
};
} // namespace mvce