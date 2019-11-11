#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i) {
		if (s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}

	}

	if (s1[i] == '\0' && s2[i] != '\0') {
		return -s2[i];
	}
	if (s1[i] != '\0' && s2[i] == '\0') {
		return s1[i];
	}
	return 0;

}