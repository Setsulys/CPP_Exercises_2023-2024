#include <iostream>
#include <vector>
#include "Person.hpp"

using namespace std;
int main(int argc, char const *argv[])
{
    vector<Person> persons;
    int nbPersonnes;
    cout << "Nombre de personnes : ";
    cin >> nbPersonnes;
    string name;
    string surname;
    string coma;
    for(auto i =0; i  < nbPersonnes; i++)
    {
        cout << "Prenom: ";
        cin >> name;
        cout << "Nom: ";
        cin >> surname;
        persons.emplace_back(Person(name,surname));
    }
    cout << "Les personnes sont ";
    for(auto p : persons)
    {
        cout << coma<< p.get_name()<<" " << p.get_surname();
        coma =", ";
    }
    cout <<"." << endl;
    return 0;
}
