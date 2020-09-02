#include "AbstractWizard.h"

int main() {
    MightyWizard wizard("Eldric");

    FoodItem *piePtr = new ApplePie;
    FoodItem *rollPtr = new Sweetroll;
    FoodItem *nutPtr = new HoneyNut;
    FoodItem *poisonPtr = new PoisonedFood;

    auto &pieRef = *piePtr;
    auto &rollRef = *rollPtr;
    auto &nutRef = *nutPtr;
    auto &poisonRef = *poisonPtr;

    wizard.checkFood(piePtr);
    wizard.checkFood(rollPtr);
    wizard.checkFood(nutPtr);
    wizard.checkFood(poisonPtr);
    wizard.checkFood(nullptr);
    wizard.checkFood(pieRef);
    wizard.checkFood(rollRef);
    wizard.checkFood(nutRef);
    wizard.checkFood(poisonRef);
    delete piePtr;
    delete rollPtr;
    delete nutPtr;
    delete poisonPtr;
    return 0;
}