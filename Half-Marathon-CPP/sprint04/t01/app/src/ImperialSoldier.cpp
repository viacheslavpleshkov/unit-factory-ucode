#include <iostream>
#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Sword.h"

using namespace std;

ImperialSoldier::ImperialSoldier() {
    m_health = 100;
}

ImperialSoldier::~ImperialSoldier() {
    delete m_weapon;
}

int ImperialSoldier::getHealth() const {
    return m_health;
}

void ImperialSoldier::setWeapon(Sword *sword) {
    m_weapon = sword;
}

void ImperialSoldier::consumeDamage(int amount) {
    m_health -= amount;
    cout << "Imperial soldier consumes "
        << amount << " of damage" << endl;
}

void ImperialSoldier::attack(StormcloakSoldier &enemy) {
    cout << "Imperial soldier attacks and deals "
        << m_weapon->getDamage() << " damage" << endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
