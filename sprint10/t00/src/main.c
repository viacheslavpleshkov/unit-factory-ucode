#include "header.h"

int main(int argc, char *argv[]) {
	char buff[] = "\0";
	int popen = 0;
	int pread = 0;
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]");		
        return 0;
    } else if ((popen = open(argv[1], O_RDONLY)) == -1) {
        mx_printerr("error");
        return 0;
    } else {
    	int popen = open(argv[1], O_RDONLY);
    	int pread = read(popen, buff, 1);
    	while(pread > 0) {
    		write(1, &buff, 1);
    		pread = read(popen, buff, 1);
    	}
        return 0;
    }
   close(popen);
   close(pread);
}
