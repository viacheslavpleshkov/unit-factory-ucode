#pragma once

#include "Lockpicking.h"

class Container : public IOpenable, public ILockable {
public:
    Container(bool isLocked, const LockpickDifficulty difficulty);

    LockpickDifficulty lockDifficulty() const;
    bool isLocked() const;
    bool tryToOpen(LockpickDifficulty skill);

    virtual std::string name() const = 0;

private:
    bool m_isLocked{false};
    LockpickDifficulty m_difficulty;
};

Container::Container(bool isLocked, const LockpickDifficulty difficulty)
        : m_isLocked(isLocked), m_difficulty(difficulty) {}

LockpickDifficulty Container::lockDifficulty() const {
    return m_difficulty;
}

bool Container::isLocked() const {
    return m_isLocked;
}

bool Container::tryToOpen(LockpickDifficulty skill) {
    return !(m_isLocked = !(skill >= m_difficulty || !m_isLocked));
}

class Barrel : public Container {
public:
    Barrel() : Container(false, LockpickDifficulty::None) {};

private:
    std::string name() const override {
        return "Barrel";
    };
};

class Chest : public Container {
public:
    Chest(bool isLocked, const LockpickDifficulty difficulty)
            : Container(isLocked, difficulty) {};

private:
    std::string name() const override {
        return "Chest";
    };
};

class Safe : public Container {
public:
    Safe(bool isLocked, const LockpickDifficulty difficulty)
            : Container(isLocked, difficulty) {};

private:
    std::string name() const override {
        return "Safe";
    };
};