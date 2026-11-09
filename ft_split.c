#include <stdlib.h>
#include <stdio.h>

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
	while (*str)
	{
		while (*str && is_sep(*str))
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

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("   hello   world   exam  test  ");
	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return (0);
}
