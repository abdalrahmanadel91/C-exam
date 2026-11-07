#include <stdlib.h>

static int	is_sep(char c)
{
	return (c == '\t' || c == ' ' || c == '\n');
}

char	**ft_split(char *str)
{
	int		i = 0;
	int		j;
	int		len;
	char	**tab;

	tab = malloc(sizeof(char *) * 1000);
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (is_sep(*str))
			str++;
		if (!*str)
			break ;
		len = 0;
		while (str[len] && !is_sep(str[len]))
			len++;
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
	tab[i] = NULL;
	return (tab);
}
#include <stdio.h>
int	main(void)
{
	char	**tab;
	int		i = 0;

	tab = ft_split("  hello   world  ");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
