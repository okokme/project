#pragma once 
#include <cassert>
#include <iostream>
#include <map>
#include <vector>
#include <memory>
#include "Channel.h"
#include "Poller.h"
#include "Nocopyable.h"
class EventLoop : Nocopyable { //EventLoop只有一个设为不可拷贝
public:
    EventLoop(Poller *poller ):_poller(poller), _loop(0) {  }
    ~EventLoop() {  }
    //向loop中添加一个新Channel
    

private:
    Poller *_poller;
 //   std::map<int, std::shared_ptr<Channel>> _channelMap;
    std::vector<std::shared_ptr<Channel>> _activeChannels;

    int _loop;
};

