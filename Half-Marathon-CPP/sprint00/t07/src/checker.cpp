#include "inventory.h"

int checker(std::string type) {
    if (type == "a" || type == "f" || type == "w" || type == "p")
        return 1;
    else
        return 0;
}
