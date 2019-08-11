#include "matrix.h"

void get_term_size(WINDOW *mainwin,int *rows, int *cols) {
    getmaxyx(mainwin,*rows,*cols);
}
