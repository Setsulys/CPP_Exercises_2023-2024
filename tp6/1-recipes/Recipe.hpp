#pragma once

#include <ostream>
#include <iostream>
#include <vector>
#include <memory>
#include "Material.hpp"
class Recipe
{
    private :
        inline static size_t next_id=1;
        std::vector<std::unique_ptr<Material>> _materials;
        std::vector<std::string> _products;
        const size_t _id;
    public:
        Recipe(std::vector<std::unique_ptr<Material>> materials, std::vector<std::string> products):
        _materials{std::move(materials)},
        _products{std::move(products)},
        _id{next_id++}
        {
            std::cout << "Recipe " << _id << " has been registered"<<std::endl;
        };


    // Affiche l'identifiant et la formule d'une recette.
    friend std::ostream& operator<<(std::ostream& stream, const Recipe& recipe) 
    { 
        stream << "(" << recipe._id << ")";
        for(const auto& material : recipe._materials)
        {
            stream << material.get() << " ";
        }
        stream << "=> ";
        for(const auto & product : recipe._products)
        {
            stream << product << " ";
        }
        return stream; 
    }
};




