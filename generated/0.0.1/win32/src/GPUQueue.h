#ifndef __GPU_QUEUE_H__
#define __GPU_QUEUE_H__

#include "Base.h"

class GPUQueue : public Napi::ObjectWrap<GPUQueue> {

  public:

    static Napi::Object Initialize(Napi::Env env, Napi::Object exports);
    static Napi::FunctionReference constructor;

    GPUQueue(const Napi::CallbackInfo &info);
    ~GPUQueue();

    Napi::ObjectReference device;

    DawnQueue queue;

    Napi::Value createFence(const Napi::CallbackInfo &info);
    Napi::Value signal(const Napi::CallbackInfo &info);

  private:

};

#endif
