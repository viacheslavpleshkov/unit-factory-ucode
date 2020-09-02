#pragma once

enum class FoodType {
    ApplePie,
    HoneyNut,
    Sweetroll,
    PoisonedFood,
    Invalid
};

class FoodItem {
public:
    FoodItem(FoodType type) {
        m_foodType = type;
    };
    FoodType m_foodType;
};

class ApplePie : public FoodItem {
public:
    ApplePie() : FoodItem(FoodType::ApplePie) {};
};

class HoneyNut : public FoodItem {
public:
    HoneyNut() : FoodItem(FoodType::HoneyNut) {};
};

class Sweetroll : public FoodItem {
public:
    Sweetroll() : FoodItem(FoodType::Sweetroll) {};
};

class PoisonedFood : public FoodItem {
public:
    PoisonedFood() : FoodItem(FoodType::PoisonedFood) {};
};