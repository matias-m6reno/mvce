#pragma once

#include <string>
#include <vector>

namespace mvce {
class Pipeline {
public:
  Pipeline(const std::string &vertFilePath, const std::string &fragFilepath);

private:
  static std::vector<char> readFile(const std::string &filepath);

  void createGraphicsPipeline(const std::string &vertFilePath,
                              const std::string &fragFilepath);
};
} // namespace mvce
