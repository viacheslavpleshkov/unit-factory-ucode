#pragma once

#include <map>

class Dragonborn final {
public:
    enum class Actions {
        Shout,
        Magic,
        Weapon,
        Invalid
    };
    void executeAction(const Actions action);

private:
    void shoutThuum() const;
    void attackWithMagic() const;
    void attackWithWeapon() const;
};
