#pragma once
#include "Item.hpp"

class Trap : public Item
{
    public:
        Trap(int x,int y):
        Item{x,y}
        {}

        char get_representation() const override { return 'X'; }
};