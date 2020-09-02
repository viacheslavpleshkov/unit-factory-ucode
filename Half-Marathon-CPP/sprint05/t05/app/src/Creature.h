#pragma once

#include <iostream>

class Creature {
public:
    Creature();
    ~Creature();
};

Creature::Creature() {
    std::cout << "Creature was created\n";
}

Creature::~Creature() {
    std::cout << "Creature was deleted\n";
}