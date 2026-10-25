#include <stdlib.h>

char **ft_split(char *s)
{
	char **r;
	int j;
	int k = 0;
	int n = 0;

	while (s[n])
		n++;
	r = malloc(sizeof(char *) * (n + 1));
	if (!r)
		return (NULL);
	while (*s)
	{
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
		if (!*s)
			break;
		n = 0;
		while (s[n] && s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			n++;
		r[k] = malloc(n + 1);
		j = -1;
		while (++j < n)
			r[k][j] = s[j];
		r[k++][n] = 0;
		s += n;
	}
	r[k] = NULL;
	return (r);
}

#include <stdio.h>

int main(void)
{
	char **r = ft_split("  hello \t world\nfoo  ");
	int i = 0;
	while (r[i])
		printf("[%s]\n", r[i++]);
	return (0);
}
