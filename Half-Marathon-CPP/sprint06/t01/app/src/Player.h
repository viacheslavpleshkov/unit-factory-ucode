#pragma once

#include "Container.h"

class Player final {
public:
    explicit Player(const std::string& name);

    void openContainer(Container* container);
    void setLockpickSkill(LockpickDifficulty skill);

private:
    LockpickDifficulty m_lockpickSkill{LockpickDifficulty::None};
    std::string m_name;
};

Player::Player(const std::string& name) : m_name(name) {}

void Player::setLockpickSkill(LockpickDifficulty skill) {
    m_lockpickSkill = skill;
}

void Player::openContainer(Container* container) {
    if (container->tryToOpen(m_lockpickSkill)) {
        std::cout << m_name << " successfully opened "
                  << container->name() << std::endl;
    } else {
        std::cout << m_name << " skill is too low to open "
                  << container->name() << std::endl;
    }
}