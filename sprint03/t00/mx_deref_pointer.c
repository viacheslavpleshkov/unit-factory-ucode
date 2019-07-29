#include <stdio.h>

void mx_deref_pointer(char ******str) {
    *****str = "Follow the white rabbit!\n";
}

int main() {
    char ******str;
    mx_deref_pointer(str);
    printf(*(str + ));

    return 0;
}