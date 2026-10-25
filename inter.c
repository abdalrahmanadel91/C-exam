#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	char seen[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j] && argv[2][j]!= argv[1][i])
				j++;
			if (argv[2][j] && !seen[(unsigned char)argv[1][i]])
			{
				seen[(unsigned char)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
