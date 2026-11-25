#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	int seen[265] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j] && argv[2][j]!=argv[1][i])
				j++;
			if (argv[2][j] && seen[(int)argv[1][i]] == 0)
			{
				seen[(int)argv[1][i]] = 1;
				write(1, &argv[1][i],1);
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}
