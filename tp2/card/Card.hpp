#pragma once
#include <iostream>
class Card
{
    private:
        unsigned int _value;
        std::string _color;
    public:
        Card(unsigned int value,std::string color);

        void print() const;
        bool operator ==(const Card& other) const;
        bool operator < (const Card& other) const;

        friend std::ostream& operator<<(std::ostream& stream, Card card);
};