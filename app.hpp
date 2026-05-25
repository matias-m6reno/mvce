#pragma once

#include "device.hpp"
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
  Device device{window};
  Pipeline pipeline{device, "shaders/basic_shader.vert",
                    "shaders/basic_shader.frag",
                    Pipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
};
} // namespace mvce