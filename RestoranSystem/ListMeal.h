#pragma once
#include "Products.h"
#include <iostream>

using namespace std;
class ListProduct
{
    pair<string, Products*>* meals;
    int length;

public:
    ListProduct() : meals{new pair<string, Products*>[50]}, length{0}
    {
        for (int i = 0; i < 50; i++)
        {
            meals[i].second = new Products[100];
            for (int j = 0; j < 100; j++)
            {
                meals[i].second[j].setName("0");
                meals[i].second[j].setName(0);
            }
        }
        meals[0].first = "Pizza";
        meals[0].second[0].setName("Work");
        meals[0].second[1].setName("Work");
        meals[0].second[2].setName("Work");
        meals[0].second[3].setName("Work");

        meals[0].second[0].setPrice(1);
        meals[0].second[1].setPrice(1);
        meals[0].second[2].setPrice(1);
        meals[0].second[3].setPrice(1);
    }

    void addMeal(pair<Products, float>* products, string _nameMeal) {

        int i = 0, j = 0;
        while (i < 50)
        {
            if (meals)
        }
    }

private:
};
