#include "readfile.h"

int main(int argc, char *argv[]) {
	char buff;
	int file = 0;
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");		
        return 0;
    } else if ((file = open(argv[1], O_RDONLY)) == -1) {
        mx_printerr("error\n");
        return 0;
    } else {
    	int file = open(argv[1], O_RDONLY);
    	while(read(file, &buff, 1)) {
    		write(1, &buff, 1);
    	}
        return 0;
    }
   close(file);
}
