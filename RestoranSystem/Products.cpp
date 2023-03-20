#include "Products.h"

Products::Products() : name{'/'}, price{0} {}

Products::Products(std::string _name, float _price) : name{_name}, price{_price} {}

std::string Products::getName()
{
    return name;
}

int Products::getPrice()
{
    return price;
}

void Products::setName(std::string _name) 
{
    name = _name;
}

void Products::setPrice(float _price)
{
    price = _price;
}

