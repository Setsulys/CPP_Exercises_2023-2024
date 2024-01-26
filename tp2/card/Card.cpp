#include <iostream>
#include "Card.hpp"

Card::Card(unsigned int value,std::string color):
        _value {value},
        _color {color}
        {}

void Card::print() const
{
    switch (_value)
    {
    case 14:
        std::cout << "As de " << _color << std::endl;
        break;
    case 11:
        std::cout << "Valet de " << _color << std::endl;
        break;
    case 12:
        std::cout <<  "Dame de " << _color << std::endl;
        break;
    case 13:
        std::cout << "Roi de " << _color << std::endl;
        break;
    default:
        std::cout << _value << " de " << _color << std::endl;
    }
}
   

bool Card::operator ==(const Card& other) const
{
    if(this->_value == other._value)
    {
        return true;
    }
    return false;
}

bool Card::operator<(const Card& other) const
{
    if(this->_value < other._value)
    {
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& stream, Card card)
{
    switch (card._value)
    {
    case 14:
        stream << "As de " << card._color << std::endl;
        break;
    case 11:
        stream << "Valet de " << card._color << std::endl;
        break;
    case 12:
        stream <<  "Dame de " << card._color << std::endl;
        break;
    case 13:
        stream << "Roi de " << card._color << std::endl;
        break;
    default:
        stream << card._value << " de " << card._color << std::endl;
    }
    return stream;
}