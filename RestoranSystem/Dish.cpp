#include "Dish.h"
#include "ListMeal.h"
Dish::Dish() : products{new std::pair<Products, float>[100]}, name{'/'}, price{0}, maxLength{100}, length{0} {}

Dish::Dish(std::string _name)
    : products{new std::pair<Products, float>[100]}, name{_name}, price{0}, maxLength{100}, length{0}
{
    createDish(_name);
}

void Dish::addProduct(const Products& product, float gramms) 
{
    
    products[length].first = product;
    products[length].second = gramms;
    length++;
}

void Dish::createDish(std::string _name)
{
    for (int i = 0; i < length; i++)
    {
        if (_name == "Pizza")
        {
            ListMeal::FullDish(products, _name, length, name);
        }
    }
}
// Hz chi pratsue ne provirav
