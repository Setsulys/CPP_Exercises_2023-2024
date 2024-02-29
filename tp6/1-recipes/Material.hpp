#pragma once

#include <ostream>
#include <iostream>

class Material
{
    private:
        std::string _name;

    public:
        Material(std::string name):
        _name{std::move(name)}
        {
            std::cout << *this << " was created" << std::endl;
        }

        ~Material()
        {
            std::cout << *this << " was destroyed" << std::endl;
        }




    // Affiche le nom d'un materiau.
    friend std::ostream& operator<<(std::ostream& stream, const Material& material) 
    { 
        stream << material._name;
        return stream; 
    }
};
