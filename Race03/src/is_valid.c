#include <stdbool.h>
#include "header.h"

bool is_valid(const char *name[]) {
    char *temp;

    for (int i = 1; i < 6; i++) {
        temp = mx_strtrim(name[i]);

        if((mx_strlen(temp) > 3 || mx_strlen(temp) < 2) || (!mx_isdigit(temp[0]) && !is_rank(temp[0]))) {
            mx_printerr("Invalid card: ");
            mx_printerr(name[i]);
            mx_printerr("\n");
            return false;
        }
        if (mx_strlen(temp) == 3 && temp[1] != '0' && temp[0] != '1') {
            if (!is_suit(temp[2])) {
              mx_printerr("Invalid card: ");
              mx_printerr(name[i]);
              mx_printerr("\n");
              return false;
            }
            mx_printerr("Invalid card rank: ");
            temp[2] = '\0';
            mx_printerr(temp);
            mx_printerr("\n");
            return false;
        }
        if (!is_suit(temp[mx_strlen(temp) - 1]) && temp[0] == '0') {
            mx_printerr("Invalid card: ");
            mx_printerr(name[i]);
            mx_printerr("\n");
            return false;
        }
        if (!is_suit(temp[mx_strlen(temp) - 1])) {
            mx_printerr("Invalid card suit: ");
            mx_printerr(&temp[mx_strlen(temp) - 1]);
            mx_printerr("\n");
            return false;
        }
        if ((!mx_isdigit(temp[0]) && !is_rank(temp[0]) )|| temp[0] == '0') {
          mx_printerr("Invalid card rank: ");
          temp[1] = '\0';
          mx_printerr(temp);
          mx_printerr("\n");
          return false;
        }
    }
    return true;
}
