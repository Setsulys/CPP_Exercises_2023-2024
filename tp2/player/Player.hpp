#include <vector>
#include "../card/Card.hpp"
class Player
{
    private :
        std::string _name;
        std::vector<Card> _cards;
        unsigned int _score;
    
    public :
        Player(std::string name);
        static void deal_all_cards(Player& p1, Player& p2);
        Card& operator[] (int index);
        friend std::ostream& operator<< (std::ostream& stream,Player player);
};