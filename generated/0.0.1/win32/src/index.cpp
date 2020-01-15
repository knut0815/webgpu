/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY webgpu v0.0.9
 */
#include "index.h"

#include "GPU.h"
#include "GPUDevice.h"
#include "GPUAdapter.h"
#include "GPUQueue.h"
#include "GPUFence.h"
#include "GPUBuffer.h"
#include "GPUTexture.h"
#include "GPUTextureView.h"
#include "GPUSampler.h"
#include "GPUBindGroupLayout.h"
#include "GPUPipelineLayout.h"
#include "GPUBindGroup.h"
#include "GPUShaderModule.h"
#include "GPURenderPipeline.h"
#include "GPUComputePipeline.h"
#include "GPUCanvasContext.h"
#include "GPUSwapChain.h"
#include "GPUCommandBuffer.h"
#include "GPUCommandEncoder.h"
#include "GPURenderPassEncoder.h"
#include "GPUComputePassEncoder.h"
#include "GPURenderBundle.h"
#include "GPURenderBundleEncoder.h"
#include "GPURayTracingAccelerationContainer.h"
#include "GPURayTracingShaderBindingTable.h"
#include "GPURayTracingPipeline.h"
#include "GPURayTracingPassEncoder.h"

#include "WebGPUWindow.h"

Napi::Object Init(Napi::Env env, Napi::Object exports) {

  GPU::Initialize(env, exports);
  GPUAdapter::Initialize(env, exports);
  GPUDevice::Initialize(env, exports);
  GPUQueue::Initialize(env, exports);
  GPUFence::Initialize(env, exports);
  GPUBuffer::Initialize(env, exports);
  GPUTexture::Initialize(env, exports);
  GPUTextureView::Initialize(env, exports);
  GPUSampler::Initialize(env, exports);
  GPUBindGroupLayout::Initialize(env, exports);
  GPUPipelineLayout::Initialize(env, exports);
  GPUBindGroup::Initialize(env, exports);
  GPUShaderModule::Initialize(env, exports);
  GPURenderPipeline::Initialize(env, exports);
  GPUComputePipeline::Initialize(env, exports);
  GPUCanvasContext::Initialize(env, exports);
  GPUSwapChain::Initialize(env, exports);
  GPUCommandBuffer::Initialize(env, exports);
  GPUCommandEncoder::Initialize(env, exports);
  GPURenderPassEncoder::Initialize(env, exports);
  GPUComputePassEncoder::Initialize(env, exports);
  GPURenderBundle::Initialize(env, exports);
  GPURenderBundleEncoder::Initialize(env, exports);
  GPURayTracingAccelerationContainer::Initialize(env, exports);
  GPURayTracingShaderBindingTable::Initialize(env, exports);
  GPURayTracingPipeline::Initialize(env, exports);
  GPURayTracingPassEncoder::Initialize(env, exports);

  WebGPUWindow::Initialize(env, exports);

  
  Napi::Object GPURayTracingAccelerationInstanceFlag = Napi::Object::New(env);
    GPURayTracingAccelerationInstanceFlag.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPURayTracingAccelerationInstanceFlag.Set(
      Napi::String::New(env, "TRIANGLE_CULL_DISABLE"),
      Napi::Number::New(env, 1)
    );
    GPURayTracingAccelerationInstanceFlag.Set(
      Napi::String::New(env, "TRIANGLE_FRONT_COUNTERCLOCKWISE"),
      Napi::Number::New(env, 2)
    );
    GPURayTracingAccelerationInstanceFlag.Set(
      Napi::String::New(env, "FORCE_OPAQUE"),
      Napi::Number::New(env, 4)
    );
    GPURayTracingAccelerationInstanceFlag.Set(
      Napi::String::New(env, "FORCE_NO_OPAQUE"),
      Napi::Number::New(env, 8)
    );
  exports["GPURayTracingAccelerationInstanceFlag"] = GPURayTracingAccelerationInstanceFlag;
  
  Napi::Object GPURayTracingAccelerationContainerFlag = Napi::Object::New(env);
    GPURayTracingAccelerationContainerFlag.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPURayTracingAccelerationContainerFlag.Set(
      Napi::String::New(env, "ALLOW_UPDATE"),
      Napi::Number::New(env, 1)
    );
    GPURayTracingAccelerationContainerFlag.Set(
      Napi::String::New(env, "PREFER_FAST_TRACE"),
      Napi::Number::New(env, 2)
    );
    GPURayTracingAccelerationContainerFlag.Set(
      Napi::String::New(env, "PREFER_FAST_BUILD"),
      Napi::Number::New(env, 4)
    );
    GPURayTracingAccelerationContainerFlag.Set(
      Napi::String::New(env, "LOW_MEMORY"),
      Napi::Number::New(env, 8)
    );
  exports["GPURayTracingAccelerationContainerFlag"] = GPURayTracingAccelerationContainerFlag;
  
  Napi::Object GPUBufferUsage = Napi::Object::New(env);
    GPUBufferUsage.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "MAP_READ"),
      Napi::Number::New(env, 1)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "MAP_WRITE"),
      Napi::Number::New(env, 2)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "COPY_SRC"),
      Napi::Number::New(env, 4)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "COPY_DST"),
      Napi::Number::New(env, 8)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "INDEX"),
      Napi::Number::New(env, 16)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "VERTEX"),
      Napi::Number::New(env, 32)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "UNIFORM"),
      Napi::Number::New(env, 64)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "STORAGE"),
      Napi::Number::New(env, 128)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "INDIRECT"),
      Napi::Number::New(env, 256)
    );
    GPUBufferUsage.Set(
      Napi::String::New(env, "RAY_TRACING"),
      Napi::Number::New(env, 512)
    );
  exports["GPUBufferUsage"] = GPUBufferUsage;
  
  Napi::Object GPUColorWriteMask = Napi::Object::New(env);
    GPUColorWriteMask.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPUColorWriteMask.Set(
      Napi::String::New(env, "RED"),
      Napi::Number::New(env, 1)
    );
    GPUColorWriteMask.Set(
      Napi::String::New(env, "GREEN"),
      Napi::Number::New(env, 2)
    );
    GPUColorWriteMask.Set(
      Napi::String::New(env, "BLUE"),
      Napi::Number::New(env, 4)
    );
    GPUColorWriteMask.Set(
      Napi::String::New(env, "ALPHA"),
      Napi::Number::New(env, 8)
    );
    GPUColorWriteMask.Set(
      Napi::String::New(env, "ALL"),
      Napi::Number::New(env, 15)
    );
  exports["GPUColorWriteMask"] = GPUColorWriteMask;
  
  Napi::Object GPUShaderStage = Napi::Object::New(env);
    GPUShaderStage.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "VERTEX"),
      Napi::Number::New(env, 1)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "FRAGMENT"),
      Napi::Number::New(env, 2)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "COMPUTE"),
      Napi::Number::New(env, 4)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "RAY_GENERATION"),
      Napi::Number::New(env, 8)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "RAY_ANY_HIT"),
      Napi::Number::New(env, 16)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "RAY_CLOSEST_HIT"),
      Napi::Number::New(env, 32)
    );
    GPUShaderStage.Set(
      Napi::String::New(env, "RAY_MISS"),
      Napi::Number::New(env, 64)
    );
  exports["GPUShaderStage"] = GPUShaderStage;
  
  Napi::Object GPUTextureUsage = Napi::Object::New(env);
    GPUTextureUsage.Set(
      Napi::String::New(env, "NONE"),
      Napi::Number::New(env, 0)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "COPY_SRC"),
      Napi::Number::New(env, 1)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "COPY_DST"),
      Napi::Number::New(env, 2)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "SAMPLED"),
      Napi::Number::New(env, 4)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "STORAGE"),
      Napi::Number::New(env, 8)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "OUTPUT_ATTACHMENT"),
      Napi::Number::New(env, 16)
    );
    GPUTextureUsage.Set(
      Napi::String::New(env, "PRESENT"),
      Napi::Number::New(env, 32)
    );
  exports["GPUTextureUsage"] = GPUTextureUsage;
  

  return exports;
}

NODE_API_MODULE(addon, Init)
