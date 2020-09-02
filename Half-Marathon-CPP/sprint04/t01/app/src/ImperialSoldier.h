#pragma once

class StormcloakSoldier;
class Sword;

class ImperialSoldier final {
public:
    ImperialSoldier();
    ~ImperialSoldier();

    void setWeapon(Sword* sword);
    void attack(StormcloakSoldier& enemy);
    void consumeDamage(int amount);
    int getHealth() const;

private:
    Sword* m_weapon;
    int m_health;
};
