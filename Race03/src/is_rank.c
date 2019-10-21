#include <stdbool.h>

bool is_rank(char c) {
    if ( c == 'J' || c == 'Q' || c == 'K' || c == 'A') {
        return true;
    }
    return false;
}
