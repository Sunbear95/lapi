#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char* str);
int main(void)
{
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("5678"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-5678"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));

	printf("%d\n", ft_atoi("    +----++-2147483648"));
	printf("%d\n", ft_atoi("+------+0"));
	printf("%d\n", ft_atoi("\t\v----------++5123145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++2123133345"));

	printf("%d\n", ft_atoi("    +----++-2147483asdas648"));
	printf("%d\n", ft_atoi("+------+10000001"));
	printf("%d\n", ft_atoi(" +-----------+00000000000000000000000\t\v\f\n 000000000000000000"));
	printf("%d\n", ft_atoi("\t\v----------++5123--145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123+145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++212  3133345"));
	return 0;
}

void	ft_isspace(char **str)
{	
	while(**str == ' ' || **str == '\n' || **str == '\t' || **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
}

int ft_pn(char **str)
{
	int	count;

	count = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count++;
		(*str)++;
	}
	if (count % 2 == 0)
		return (0);
	else
		return (1);
}
	
int	ft_atoi(char *str)
{
	int	n;
	int	min;
	
	min = 1;
	n = 0;
	ft_isspace(&str);
	if(ft_pn(&str))
		min *= -1;
	while (*str != 0)
	{
		if(*str >= '0' && *str <= '9')
		{
			n = 10 * n + (*str - '0');
			str++;
		}
		else
		{
		if (min == -1)
			return (-1 * n);
		return (n);
		}
	}
	return (min*n);
}
