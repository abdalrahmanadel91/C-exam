#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *s)
{
	char	**tab;
	int		i;
	int		len;
	int		j;

	tab = malloc(sizeof(char *) * 1000);
	i = 0;
	while (*s)
	{
		while (is_sep(*s))
			s++;
		len = 0;
		while (s[len] && !is_sep(s[len]))
			len++;
		if (len)
		{
			tab[i] = malloc(len + 1);
			j = 0;
			while (j < len)
			{
				tab[i][j] = s[j];
				j++;
			}
			tab[i++][len] = 0;
			s += len;
		}
	}
	tab[i] = NULL;
	return (tab);
}
