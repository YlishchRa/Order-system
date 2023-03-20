#pragma once
#include "Products.h"
class Dish
{
    std::pair<Products, float>* products;
    std::string name;
    float price;
    int maxLength;
    int length;

public:
    Dish();
    Dish(std::string _name);

    void addProduct(const Products& product, float gramms);
    void createDish(std::string _name);

    friend std::ostream& operator<<(std::ostream& output, const Dish& dish)
    {
        output << "Name: " << dish.name << "Products: \n\t";
        for (int i = 0; i < dish.length; i++)
        {
            output << dish.products[i].first.getName() << "\n\t";
        }
        return output;
    }
};
