#pragma once

#include "Entity.hpp"
#include "Trap.hpp"
#include "Potion.hpp"

class Character : public Entity
{
    private:
        char _representation = 'O';
    public:
        Character(int x,int y):
        Entity{x,y}
        {}

        char get_representation() const override { return _representation; }

        void interact_with(Entity& entity) override
        {

            const auto* trap = dynamic_cast<Trap*>(&entity);
            if (trap != nullptr)
            {
                switch (_representation)
                {
                case 'O': 
                    _representation ='o';
                    break;
                case 'o':
                    _representation =' ';
                    break;
                default:
                    break;
                }
            }
            const auto* potion = dynamic_cast<Potion*>(&entity);
            if (potion != nullptr)
            {
                if(_representation='o')
                {
                    _representation='O';
                }
            }


        }
};