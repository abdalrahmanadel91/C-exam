#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*str;

	n = nbr;
	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
