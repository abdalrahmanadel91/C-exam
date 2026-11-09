int	get_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result = 0;
	int	sign = 1;
	int	val;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		val = get_val(*str);
		if (val < 0 || val >= str_base)
			break ;
		result = result * str_base + val;
		str++;
	}
	return (result * sign);
}
