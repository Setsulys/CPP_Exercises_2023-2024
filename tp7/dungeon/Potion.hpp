#pragma once
#include "Item.hpp"

class Potion : public Item
{
    public:
        Potion(int x,int y):
        Item{x,y}
        {}

        char get_representation() const override { return '$'; }
};