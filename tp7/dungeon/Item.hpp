#pragma once

#include "Entity.hpp"

class Item : public Entity
{
    public:
        Item(int x, int y):
        Entity{random_value(0,x-1),random_value(0,y-1)}

        {}

        virtual char get_representation() const {return '!';}

        void update() override 
        { }
};