#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *d;

	while (src[i])
		i++;
	d = malloc(1 + i);
	if(!d)
		return (NULL);
	i = -1;
	while (src[++i])
		d[i] = src[i];
	d[i] = 0;
	return (d);
}
