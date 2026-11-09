#include <stdlib.h>

char *ft_itoa(int nbr)
{
	long n;
	int len = 0;
	char *str;
	
	n = nbr;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr/10;
		len++;
	}
	str = malloc(len +1);
	str[len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if ( n == 0)
		str[0] = '0';
	while ( n > 0)
	{
		len--;
		str[len] = n % 10 + '0';
		n = n/10;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	printf("%s\n",ft_itoa(-67));
}
