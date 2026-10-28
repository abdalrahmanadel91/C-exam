#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	int size;
	int i = 0;

	if (start <= end)
		size = end - start  + 1;
	else
		size = start - end + 1;
	range = malloc(sizeof(int) *size);
	if(!range)
		return (NULL);
	while (i < size)
	{
		if (start <= end)
			range[i] = start + i;
		else
			range[i] = start - i;
		i++;
	}
	return (range);
}
