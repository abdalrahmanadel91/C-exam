#include <stdlib.h>

int is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **ft_split(char *str)
{
	int i = 0;
	int j;
	int len;
	char **tab;

	tab = malloc(sizeof(char *) * 1000);
	while(*str)
	{
		while(is_sep(*str))
			str++;
		len = 0;
		while (str[len] && !is_sep(str[len]))
			len++;
		if (len)
		{
			tab[i] = malloc(len + 1);
			j = 0;
			while ( j < len)
			{
				tab[i][j] = str[j];
				j++;
			}
			tab[i++][j] = 0;
			str += len;
		}
	}
	tab[i] = NULL;
	return (tab);
}
