#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
	int count = 0;
	int num = 0;
  int last = n % 10;

	n = n / 10;
	if (n < 0) {
		mx_printchar('-');
		n = -n;
		last = -last;
	}


  while (n != 0) {
    num = num * 10 + n % 10;
    n /= 10;
    count++;
  }
  for (int i = 0; i < count; ++i)
  {
    mx_printchar(num % 10 + 48);
    num /= 10;
  }
	mx_printchar(last + 48);
}
