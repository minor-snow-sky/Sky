#pragma once
#ifdef SKY_PLATFORM_WINDOWS
#include"Log.h"
extern Sky::Application* Sky::CreateApplication();
int main(int argc,char**argv)
{
    Sky::Log::Init();
    Sky::Log::GetCoreLogger()->warn("初始化日志");
    Sky::Log::GetClientLogger()->info("引擎");
    auto app = Sky::CreateApplication();
    app->Run();
    delete app;
}
#endif // 
