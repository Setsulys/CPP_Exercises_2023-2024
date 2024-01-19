#include <string>
using namespace std;

class Person
{
public:
    std::string first_name;
    std::string surname;

    Person(string first_name_,string surname_)
    :   first_name {first_name_},
        surname {surname_}
        {
            
        }

};