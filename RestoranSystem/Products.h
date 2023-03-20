#pragma once
#include <iostream>
class Products
{
    std::string name;
    float price;

public:
    Products();
    Products(std::string _name, float _price);

    std::string getName();
    int getPrice();

    void setName(std::string _name);
    void setPrice(float _price);
};
