#include <iostream>

enum CardValue
{
    Sept = 7,
    Huit = 8,
    Neuf = 9,
    Dix = 10,
    Valet = 11,
    Dame = 12,
    Roi = 13,
    As =14
}; 

enum CardColor
{
    Pique,
    Carreau,
    Coeur,
    Trefle
};

class Card
{
    private:
        CardValue _value;
        CardColor _color;
    public:
        Card(CardValue value,CardColor color);

        void print() const;
        bool operator ==(const Card& other) const;
        bool operator < (const Card& other) const;
        CardValue value() const;
        CardColor color() const;

};