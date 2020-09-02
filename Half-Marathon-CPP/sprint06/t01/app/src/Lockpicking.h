#pragma once

#include <iostream>

enum class LockpickDifficulty {
    None = 0,
    Novice = 25,
    Apprentice = 40,
    Adept = 60,
    Expert = 80,
    Master = 100
};

class IOpenable {
public:
    virtual bool tryToOpen(LockpickDifficulty) = 0;
};

class ILockable {
public:
    virtual LockpickDifficulty lockDifficulty() const = 0;
    virtual bool isLocked() const = 0;
};