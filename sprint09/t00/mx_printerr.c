#include "printerr.h"
int mx_strlen(const char *s);

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}
