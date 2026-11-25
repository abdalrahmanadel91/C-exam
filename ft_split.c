#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
char	**ft_split(char *str)
{
	int		i = 0;
	int		j;
	int		len = 0;
	char	**tab;

	while (str[len])
		len++;
	tab = malloc(sizeof(char *) * (len / 2 + 2));
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		len = 0;
		while (str[len] && !is_sep(str[len]))
			len++;
		if (len)
		{
			tab[i] = malloc(len + 1);
			j = 0;
			while (j < len)
			{
				tab[i][j] = str[j];
				j++;
			}
			tab[i++][j] = '\0';
			str += len;
		}
	}
	tab[i] = NULL;
	return (tab);
}

#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i = 0;

	tab = ft_split("   hello   world   exam  test  ");
	if (tab)
	{
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
	return (0);
}
