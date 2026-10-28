int ft_atoi(const char *str)
{
	int nbr, sig;
	nbr = 0;
	sig = 1;

	if (*str == '-' || *str == '+')
		if (*str == '-')
			sig = -1;
		sig++;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (sig * nbr);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_atoi("526"));
}
