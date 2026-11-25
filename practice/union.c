#include <unistd.h>

int main(int argc, char **argv)
{
	int seen[256] = {0};
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[1][i] && seen[(int)argv[1][i]] != 0)
		{
			seen[(int)argv[1][i]] = 1;
			write(1,&argv[1][i],1);
			i++;
		}
		while (argv[2][j] && seen[(int)argv[2][j]] != 0)
		{
			seen[(int)argv[1][j]] = 1;
			write(1,&argv[1][j],1);
			j++;
		}
		i++;
		j++;
	}
	}
	write(1,"\n",1);
	return (0);
}
