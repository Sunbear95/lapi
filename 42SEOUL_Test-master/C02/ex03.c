
#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_numeric("asdfasdf"));
	printf("%d\n", ft_str_is_numeric("ASDFasdf"));
	printf("%d\n", ft_str_is_numeric("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_numeric("asdf1145aa"));
	printf("%d\n", ft_str_is_numeric("11aaaaaa11"));
	printf("%d\n", ft_str_is_numeric("2745555511"));
	printf("%d\n", ft_str_is_numeric("     "));
    return 0;
}
int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 1;
	while (a != '\0')
	{
		a = *str;
		if (a == 0)
			return (1);
		if (a < 48 || a > 57)
			return (0);
		str++;
	}
	return (1);
}
