#include "app.hpp"

namespace mvce {

void App::run() {
  while (!window.shouldClose()) {
    glfwPollEvents();
  }
}
} // namespace mvce