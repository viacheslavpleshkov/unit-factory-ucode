#include "Sword.h"

Sword::Sword(int damage) : m_damage(damage) {};

int Sword::getDamage() const {
    return m_damage;
}
