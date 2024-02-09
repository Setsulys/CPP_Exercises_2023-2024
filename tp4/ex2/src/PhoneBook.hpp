#pragma once
#include <vector>
#include <cstddef>
#include "PhoneBookEntry.hpp"
#include "PhoneNumber.hpp"

class PhoneBook
{
    private:
        std::vector<PhoneBookEntry> book;
    public:
        void add_entry(PhoneBookEntry entry)
        {
            book.emplace_back(entry);
        }

        const PhoneNumber* get_number(std::string name)
        {
            for(auto entry : book)
            {
                if(entry.get_name()==name)
                {
                    return &entry.get_number();
                }
            }
           return nullptr;
        }
};