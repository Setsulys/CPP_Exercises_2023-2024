#pragma once
#include "PhoneNumber.hpp"
class PhoneBookEntry
{

    private:
        std::string &_name;
        PhoneNumber &_number;
    
    public:
        PhoneBookEntry(std::string name, PhoneNumber number):
        _name {name},
        _number{number}
        {

        }

        std::string& get_name() const
        {
            return _name;
        }

        PhoneNumber& get_number() const
        {
            return _number;
        }

        bool operator==(PhoneBookEntry other) const
        {
            return get_name() == other.get_name();
        }
};