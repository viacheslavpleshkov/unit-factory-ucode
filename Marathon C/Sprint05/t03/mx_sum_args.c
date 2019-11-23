#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
void mx_printint(int num);
bool mx_isspace(char c);

int main(int argc, char **argv)
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		if (mx_atoi(argv[i]))
		{
			sum = sum + mx_atoi(argv[i]);
		}
	}

	mx_printint(sum);

	return 0;
}
