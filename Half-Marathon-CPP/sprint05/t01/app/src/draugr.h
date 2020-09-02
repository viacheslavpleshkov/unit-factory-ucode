#pragma once

#include "algorithmUtils.h"
#include <iostream>
#include <string>
#include <regex>

class Draugr {
public:
    Draugr();
    Draugr(int frostResist);
    Draugr(double health, int frostResist = 50);

    void shoutPhrase(int shoutNumber) const;

private:
    double m_health;
    const int m_frostResist;
};

void error(int argc);
