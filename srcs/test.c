#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(int c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f') 
			|| (c == '\r') || (c == ' '))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4')
		|| (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	short int	sign;
	int			res;

	res = 0;
	sign = -1;
	while ((*str) && ((ft_isspace(*str))) && (*str != '-') && (*str != '+'))
		str++;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	if (*str == '+')
	{
		sign = -1;
		str++;
	}
	while ((*str) && ft_isdigit(*str))
	{
		res = res * 10 - (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	printf("my_atoi: %d\natoi: %d\nstrol: %d\n",ft_atoi(argv[1]), atoi(argv[1]), (int)strtol(argv[1], (char **)NULL, 10));
	return (0);
}
