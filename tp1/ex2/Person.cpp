#include "Person.hpp"

    using namespace std;

    string Person::get_name() const
    {
        return first_name;
    }

    string Person::get_surname() const
    {
        return surname;
    }