#pragma once
#ifdef SKY_PLATFORM_WINDOWS
#include"Log.h"
extern Sky::Application* Sky::CreateApplication();
int main(int argc,char**argv)
{
    Sky::Log::Init();
    Sky::Log::GetCoreLogger()->warn("��ʼ����־");
    Sky::Log::GetClientLogger()->info("����");
    auto app = Sky::CreateApplication();
    app->Run();
    delete app;
}
#endif // 
