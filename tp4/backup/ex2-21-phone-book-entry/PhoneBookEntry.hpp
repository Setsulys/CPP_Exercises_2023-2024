#pragma once
#include "PhoneNumber.hpp"
class PhoneBookEntry
{

    private:
        std::string _name;
        PhoneNumber _number;
    
    public:
        PhoneBookEntry(std::string name, PhoneNumber number):
        _name {name},
        _number{number}
        {

        }
};