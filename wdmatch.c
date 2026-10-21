#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i,j,r;
	i = j = r = 0;

	if (argc == 3)
	{
		while(argv[1][i])
		{
			while (argv[2][j] && argv[1][i] != argv[2][j])
				j++;
			if (argv[2][j] == argv[1][i])
			{
				r++;
				j++;
			}
			i++;
		}
		if (r == ft_strlen(argv[1]))
			write(1,argv[1],ft_strlen(argv[1]));
	}
	write(1,"\n",1);
	return (0);
}
