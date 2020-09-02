#include "dragonborn.h"
#include <functional>
#include <iostream>
#include <map>

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul\n";
}

void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*\n";
}

void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*\n";
}

void Dragonborn::executeAction(const Actions action) {
    std::map<Actions, void (Dragonborn::*)() const> exe = {
        {Actions::Shout, &Dragonborn::shoutThuum},
        {Actions::Magic, &Dragonborn::attackWithMagic},
        {Actions::Weapon, &Dragonborn::attackWithWeapon}};
    std::invoke(exe[action], this);
}
