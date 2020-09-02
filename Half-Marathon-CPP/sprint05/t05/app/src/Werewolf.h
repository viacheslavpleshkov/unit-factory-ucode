#pragma once

#include "Human.h"
#include "Wolf.h"

class Werewolf : public Human, public Wolf {
public:
    Werewolf();
    ~Werewolf();
};

Werewolf::Werewolf() {
    std::cout << "Werefolf was created\n";
}

Werewolf::~Werewolf() {
    std::cout << "Werefolf was deleted\n";
}