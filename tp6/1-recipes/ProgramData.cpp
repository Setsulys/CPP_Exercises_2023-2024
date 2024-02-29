#include "ProgramData.hpp"
#include "Material.hpp"
#include "Recipe.hpp"
#include <memory>

void ProgramData::add_material(std::string name)
{
    _materials.emplace_back(std::make_unique<Material>(name));
}

void ProgramData::get_materials(std::vector<const Material*>& materials) const
{
    for(const auto& material : _materials)
    {
        materials.emplace_back(material.get());
    }
}

void ProgramData::register_recipe(std::vector<std::string> materials, std::vector<std::string> products)
{
    std::vector<std::unique_ptr<Material>> material_ptr;
    for(auto & name :materials){
        material_ptr.emplace_back(std::make_unique<Material>(name));
    }
    _recipes.emplace_back(std::make_unique<Recipe>(std::move(material_ptr),std::move(products)));
}

void ProgramData::collect_doable_recipes(std::vector<const Recipe*>& recipes) const
{}

ProductionResult ProgramData::produce(size_t recipe_id)
{
    ProductionResult result;
    return result;
}