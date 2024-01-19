#include <string>
using namespace std;

class Person
{
private :
    std::string first_name;
    std::string surname;
public:
    Person(string first_name_,string surname_)
    :   first_name {first_name_},
        surname {surname_}
        {
            
        }
    
    string get_name() const;
    string get_surname() const;

};