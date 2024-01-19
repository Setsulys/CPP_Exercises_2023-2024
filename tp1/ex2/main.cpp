#include <iostream>
#include "Person.hpp"
int main(int argc, char const *argv[])
{
    auto p = Person("Paluche","LaFaluche");
    std::cout << "La personne s'appelle "<<p.first_name <<" "<<p.surname << std::endl;
    return 0;
}
