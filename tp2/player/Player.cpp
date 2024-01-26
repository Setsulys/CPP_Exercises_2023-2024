#include <algorithm>
#include <random>
#include "Player.hpp"

Player::Player(std::string name):
_name {name}
{
    _score =0;
}

void Player::deal_all_cards(Player& p1, Player& p2)
{
    std::vector<Card> all_cards;
    std::vector<std::string> colors{"Pique","Carreau","Coeur","Trefle"};
    for(unsigned int val = 7; val < 15; val++)
    {
        for(auto color : colors)
        {
            all_cards.emplace_back(Card{val,color});
        }
    }
    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));
    auto half = all_cards.size()/2;
    for(const auto &card : all_cards)
    {
        if(half==0)
        {
            p1._cards.emplace_back(card);
        }
        else
        {
            p2._cards.emplace_back(card);
            half--;
        }
        
    }
}

Card& Player::operator[] (int index)
{
    return _cards[index];
}
