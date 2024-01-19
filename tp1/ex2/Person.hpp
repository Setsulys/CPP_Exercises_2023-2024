#include <string>

class Person
{
private :
    std::string first_name;
    std::string surname;
public:
    Person(std::string first_name_,std::string surname_)
    :   first_name {first_name_},
        surname {surname_}
        {
            
        }
    
    std::string get_name() const;
    std::string get_surname() const;

};