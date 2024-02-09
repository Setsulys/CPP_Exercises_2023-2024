#pragma once
#include <vector>
#include "PhoneBookEntry.hpp"

class PhoneBook
{
    private:
        std::vector<PhoneBookEntry> book;
    public:
        void add_entry(PhoneBookEntry entry)
        {
            book.emplace_back(entry);
        }

};