#include "readfile.h"

void mx_printerr(const char *s) {
	write(1, s, mx_strlen(s));
}
