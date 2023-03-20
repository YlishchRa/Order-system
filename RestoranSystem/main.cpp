#include "Dish.h"
#include "ListMeal.h"
int main()
{
    ListMeal::getName(1);

    Dish dish;
    dish.createDish("Pizza");

    std::cout << dish << std ::endl;

    return 0;
}