#include "hex_to_nbr.h"
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

static int val(char c) { 
    if (mx_isdigit(c)) 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
} 

static int mx_strlen(const char *s) {
    int i = 0;
    while (s[i]) {
        i++;
    }
    return i;
}

unsigned long mx_hex_to_nbr(const char *hex) { 
    int leng = mx_strlen(hex); 
    int power = 1; 
    int num = 0;  
    int i; 
    if(!mx_isalpha(*hex)) {
        return 0;
    }
    
    for (i = leng - 1; i >= 0; i--) { 
        if (val(hex[i]) >= 16) { 
           return -1; 
        } 
        num += val(hex[i]) * power; 
        power = power * 16; 
    }
    return num; 
} 
