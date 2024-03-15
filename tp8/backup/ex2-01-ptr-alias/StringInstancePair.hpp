#pragma once
#include <iostream>

#include "../lib/InstanceCounter.hpp"

class StringInstancePair
{
    private:
        std::string _str;
        InstanceCounter _instanceCounter;
    public:
        StringInstancePair(const std::string str):
        _str{str},
        _instanceCounter{new InstanceCounter{}}
        {}

        std::string get_str() const
        {
            return _str;
        }

        InstanceCounter get_instance_counter() const
        {
            return _instanceCounter.origin();
        }

};