#pragma once
#include "AppLoopFlags.hpp"
#include "Returns.hpp"

class AppObject
{
private:
AppObject(){};
void operator()() = delete;
AppState AppStateFlag_;

public:  
static AppObject& GetInstance()
{
  static AppObject App;
  return App;
}

ReturnReply Iteration(){
switch(AppStateFlag_)
{
case AppState::Normal: {
break;
};

default: {return ReturnReply::Error;};
}
  

return ReturnReply::Success;
}
  
};
