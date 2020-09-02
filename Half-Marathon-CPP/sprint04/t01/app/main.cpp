#include "StormcloakSoldier.h"
#include "ImperialSoldier.h"
#include "algorithmUtils.h"
#include "Sword.h"
#include "Axe.h"
#include <iostream>
#include <string>

using namespace std;

int getWeaponDmg(string&& arg) {
    size_t idx;
    int weaponDmg = stoi(arg, &idx);

    if (!IsInRange(weaponDmg, 10, 20) || arg[idx] != '\0')
        throw false;
    return weaponDmg;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        exit(1);
    }
    try {
        Sword *sword = new Sword(getWeaponDmg(string(argv[1])));
        Axe *axe = new Axe(getWeaponDmg(string(argv[2])));
        ImperialSoldier imperial;
        StormcloakSoldier stormcloak;

        imperial.setWeapon(sword);
        stormcloak.setWeapon(axe);

        while (imperial.getHealth() > 0 && stormcloak.getHealth() > 0) {
            imperial.attack(stormcloak);
            stormcloak.attack(imperial);
            cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            if (stormcloak.getHealth() <= 0) {
                cout << "Imperial has won!" << endl;
                return 1;
            }
            if (imperial.getHealth() <= 0) {
                cout << "Stormcloack has won!" << endl;
                return 1;
            }
        }
    }
    catch (...) {
        cerr << "Damage has to be in a range of 10-20 points.\n";
        exit(1);
    }
}
