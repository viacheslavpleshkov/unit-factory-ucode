#include <iostream>
#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "Axe.h"

using namespace std;

StormcloakSoldier::StormcloakSoldier() {
    m_health = 100;
}

StormcloakSoldier::~StormcloakSoldier() {
    delete m_weapon;
}

int StormcloakSoldier::getHealth() const {
    return m_health;
}

void StormcloakSoldier::setWeapon(Axe *exe) {
    m_weapon = exe;
}

void StormcloakSoldier::consumeDamage(int amount) {
    m_health -= amount;
    cout << "Stormcloak soldier consumes "
        << amount << " of damage" << endl;
}

void StormcloakSoldier::attack(ImperialSoldier &enemy) {
    cout << "Stormcloak soldier attacks and deals "
        << m_weapon->getDamage() << " damage" << endl;
    enemy.consumeDamage(m_weapon->getDamage());
}
