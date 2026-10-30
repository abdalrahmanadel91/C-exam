#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int size;

	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;
	range = malloc(sizeof(int) * size);
	if(!range)
		return NULL;
	while (i < size)
	{
		if (end >= start)
			range[i] = end - i;
		else
			range[i] = end + i;
		i++;
	}
	return (range);
}
