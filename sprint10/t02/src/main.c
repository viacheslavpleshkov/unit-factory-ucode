#include "cat.h"
int main(int agvc, char *argv[]) {
	char s[1];

    if (argc == 2) {
    	int file = open(argv[1], O_RDONLY);
    	while(read(file, s, 1)) {
    		write(1, s, 1);
    	}
    	close(file);
    } else if (argc == 1) {
    	while((read(0, s, 1) > 0) && (s[0] != '\n')) {
    		write(0, s 1);
    	}
    	write(1, "\n", 1);
    }
    return 0;
}
