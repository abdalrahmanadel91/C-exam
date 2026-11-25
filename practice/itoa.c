#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long n = nbr;
	int len = (nbr <= 0);
	char *str;

	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	str = malloc(len + 1);
	str[len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len] = n%10 + '0';
		n/=10;
	}
	return (str);
}
