#include <iostream>
#include "Card.hpp"

Card::Card(CardValue value,CardColor color):
        _value {value},
        _color {color}
        {}

void Card::print() const
{
    switch (_value)
    {
    case 14:
        std::cout << "AS de " << _color << std::endl;
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
        std::cout << std::to_string(_value) << " de " << _color << std::endl;
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

CardValue Card::value() const
{
    return _value;
}

CardColor Card::color() const
{
    return _color;
}

std::ostream& operator<<(std::ostream& stream,  Card card)
{
    switch (card.value())
    {
    case 14:
        std::cout << "AS de " << card.color() << std::endl;
        break;
    case 11:
        std::cout << "Valet de " << card.color() << std::endl;
        break;
    case 12:
        std::cout <<  "Dame de " << card.color() << std::endl;
        break;
    case 13:
        std::cout << "Roi de " << card.color() << std::endl;
        break;
    default:
        std::cout << std::to_string(card.value()) << " de " << card.color() << std::endl;
    }

    return stream;
}