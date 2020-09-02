#include "draugr.h"

Draugr::Draugr() : m_health(100), m_frostResist(50) {};

void Draugr::shoutPhrase(int shoutNumber) const {
    std::cout << "Draugr (" << this->m_health << " health, " << this->m_frostResist << "% frost resist) shouts:\n";
    if (shoutNumber == 0)
        std::cout << "Qiilaan Us Dilon!\n";
    else if (shoutNumber == 1)
        std::cout << "Bolog Aaz, Mal Lir!\n";
    else if (shoutNumber == 2)
        std::cout << "Kren Sosaal!\n";
    else if (shoutNumber == 3)
        std::cout << "Dir Volaan!\n";
    else if (shoutNumber == 4)
        std::cout << "Aar Vin Ok!\n";
    else if (shoutNumber == 5)
        std::cout << "Unslaad Krosis!\n";
    else if (shoutNumber == 6)
        std::cout << "Faaz! Paak! Dinok!n";
    else if (shoutNumber == 7)
        std::cout << "Aav Dilon!\n";
    else if (shoutNumber == 8)
        std::cout << "Sovngarde Saraan!\n";
    else
        std::cout << "Invalid shoutNumber\n";
}