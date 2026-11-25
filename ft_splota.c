#include <stdlib.h>

int is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char **ft_split(char *str)
{
	int i = 0;
	int j;
	int len = 0;
	char ** tab;

	while(str[len])
		len++;
	tab = malloc(sizeof(char *) * (len/2 + 2));
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		len = 0;
		while (str[len] && !is_sep(str[len]))
			len++;
		if (len)
		{
			j = 0;
			tab[i] = malloc(len + 1);
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

#include <stdio.h>

int main(void)
{
	int i = 0;
	char **tab = ft_split("ahmad mohsen      is the best guy");

	if (tab)
	{
		while(tab[i])
			printf("%s\n",tab[i++]);
	}
}
