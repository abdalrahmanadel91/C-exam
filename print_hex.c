#include <unistd.h>

void h(unsigned n)
{
	if (n > 15)
		h(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int c, char **v)
{
	unsigned n = 0;
	char *s = v[1];

	if (c == 2)
	{
		while (*s)
			n = n * 10 + *s++ - '0';
		h(n);
	}
	write(1, "\n", 1);
}
