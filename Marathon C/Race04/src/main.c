#include "header.h"

int main(int argc, char const *argv[]) {
  if (argc != 6) {
      mx_printerr("usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n");
      exit(0);
  }

  int ryad,stovb;
  int len;
  int x1 = mx_atoi(argv[2]), x2 = mx_atoi(argv[4]);
  int y1 = mx_atoi(argv[3]), y2 = mx_atoi(argv[5]);

  char *str = mx_file_to_str(argv[1]);
  int **mat = matrix(str,&ryad,&stovb);
  int **mat1 = matrix(str,&ryad,&stovb);

  int px[ryad * stovb], py[ryad * stovb];

  if (!mx_algorith_lee(mat,x1,y1,x2,y2,ryad,stovb,&len,px,py)) {
       mx_printerr("route not found\n");
       exit(0);
  }

  mx_printstr("dist=");
  mx_printint(mx_matrix_max(mat1,x1,y1,ryad,stovb));
  mx_printstr("\n");
  mx_printstr("exit=");
  mx_printint(len);
  mx_printstr("\n");
  return 0;
}
