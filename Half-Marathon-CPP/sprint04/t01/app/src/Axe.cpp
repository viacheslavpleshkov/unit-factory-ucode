#include "Axe.h"

Axe::Axe(int damage) : m_damage(damage) {};

int Axe::getDamage() const {
    return m_damage;
}
