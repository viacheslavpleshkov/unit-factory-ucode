#pragma once

class ImperialSoldier;
class Axe;

class StormcloakSoldier final {
public:
    StormcloakSoldier();
    ~StormcloakSoldier();

    void setWeapon(Axe* exe);
    void attack(ImperialSoldier& enemy);
    void consumeDamage(int amount);
    int getHealth() const;

private:
    Axe* m_weapon;
    int m_health;
};
