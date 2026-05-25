#pragma once

#include "device.hpp"

// std headers
#include <string>
#include <vector>

namespace mvce {

struct PipelineConfigInfo {};

class Pipeline {
public:
  Pipeline(Device &device, const std::string &vertFilePath,
           const std::string &fragFilepath,
           const PipelineConfigInfo &configInfo);
  ~Pipeline(){};

  Pipeline(const Pipeline &) = delete;
  void operator=(const Pipeline &) = delete;

  static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t widht,
                                                      uint32_t height);

private:
  static std::vector<char> readFile(const std::string &filepath);

  void createGraphicsPipeline(const std::string &vertFilePath,
                              const std::string &fragFilepath,
                              const PipelineConfigInfo &configInfo);

  void createrShaderModule(const std::vector<char> &code,
                           VkShaderModule *shaderModule);

  Device &device;
  VkPipeline graphicsPipeline;
  VkShaderModule vertShaderModule;
  VkShaderModule fragShaderModule;
};
} // namespace mvce
