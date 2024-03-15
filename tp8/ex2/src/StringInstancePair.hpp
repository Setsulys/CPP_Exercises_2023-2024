#pragma once
#include <iostream>
#include <memory>
#include "../lib/InstanceCounter.hpp"

class StringInstancePair
{
    private:
        std::string _str;
        InstanceCounter* _instanceCounter = new InstanceCounter{};
    public:
        StringInstancePair(const std::string str):
        _str{str}
        {}

        StringInstancePair(StringInstancePair && other):
        _str{std::move(other._str)},
        _instanceCounter{other._instanceCounter}
        {}

        std::string get_str() const
        {
            return _str;
        }

        InstanceCounter get_instance_counter()
        {
            return *_instanceCounter;
        }

};