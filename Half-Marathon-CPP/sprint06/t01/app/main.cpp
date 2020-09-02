#include "Player.h"

int main() {
    std::string playerName = "J'datharr";
    auto player = Player(playerName);
    auto barrel = new Barrel;
    auto chest = new Chest(true, LockpickDifficulty::Apprentice);
    auto safe = new Safe(true, LockpickDifficulty::Master);

    player.openContainer(barrel);
    player.openContainer(chest);
    player.openContainer(safe);
    player.setLockpickSkill(LockpickDifficulty::Adept);
    player.openContainer(chest);
    player.openContainer(safe);
    player.setLockpickSkill(LockpickDifficulty::Master);
    player.openContainer(safe);

    delete barrel;
    delete chest;
    delete safe;
    return 0;
}