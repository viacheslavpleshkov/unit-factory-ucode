#include <unistd.h>
#include "mx_strlen.c"

void mx_printchar(const char *s) {
    for (int i = 0; i < mx_strlen(s) -1; i++) {
        write (1, &s[i], 1);
    }
}
