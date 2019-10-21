#include "copyfile.h"

int main(int argc, char *argv[]) {
    int file1 = 0;
    int file2 = 0;
    char buff;

    if (argc == 3) {
        file1 = open(argv[1], O_RDONLY);
        file2 = open(argv[2], O_CREAT| O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
        if (file1 == -1){
            mx_printerr("mx_cp: ");
            mx_printerr(argv[1]);
            mx_printerr(": ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
        }
        while(read(file1, &buff, 1)) {
            write(file2, &buff, 1);
        }
    } else {
        mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
    }

    close(file1);
    close(file2);
    exit(0);
    return 0;
}
