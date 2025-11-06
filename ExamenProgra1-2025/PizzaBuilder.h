#pragma once
#include <vector>
#include <string>
#include "TomatoesRepository.h"
#include "MeatsRepository.h"
#include "IngredientSelector.h"

class PizzaBuilder {
public:
    PizzaBuilder();

    void BuildPizza();
    void DisplayFinalPizza() const;

private:
    void SelectTomatoes();
    void SelectCheese();
    void SelectHerb();
    void SelectMeats();

    TomatoesRepository tomatoRepo_;
	MeatsRepository meatRepo_;
    std::vector<std::string> selectedIngredients_;

    const std::vector<std::string> availableTomatoes_ = {"Cherry", "Roma", "Beefsteak", "Heirloom", "Grape"};
    const std::vector<std::string> availableCheeses_ = {"Mozzarella", "Cheddar", "Parmesan", "Cream Cheese", "Gouda", "Blue Cheese", "Feta"};
    const std::vector<std::string> availablemeats_ = { "Pepperoni", "Bacon", "Chicken", "Mignon", "Ham", "Sausage", "Prosciutto" };
};