#pragma once

#include "Food.h"
#include <iostream>
#include <map>

class AbstractWizard {
protected:
    virtual void deductFoodType(FoodType food) = 0;
};

class MightyWizard : public AbstractWizard {
public:
    MightyWizard(std::string &&name) : m_name(name) {};

    void checkFood(FoodItem *foodPtr) {
        if (!foodPtr)
            deductFoodType(FoodType::Invalid);
        else
            deductFoodType(foodPtr->m_foodType);
    }

    void checkFood(const FoodItem &foodPtr) {
        deductFoodType(foodPtr.m_foodType);
    }

    void deductFoodType(FoodType food) override {
        static std::map<FoodType, std::string> mapFood = {
                {FoodType::HoneyNut, "Honey nut. Mmm, tasty!"},
                {FoodType::Sweetroll, "Sweetroll. Mmm, tasty!"},
                {FoodType::Invalid, "<wtf>. Ugh, not again!"},
                {FoodType::ApplePie, "Apple pie. Ugh, not again!"},
                {FoodType::PoisonedFood, "Poison. Ugh, not again!"},
        };
        std::cout << mapFood[food] << std::endl;
    }

private:
    std::string m_name;
};