
#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_uppercase("asdfasdf"));
	printf("%d\n", ft_str_is_uppercase("ASDFasdf"));
	printf("%d\n", ft_str_is_uppercase("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_uppercase("asdf1145aa"));
	printf("%d\n", ft_str_is_uppercase("aa aa"));
	printf("%d\n", ft_str_is_uppercase("2745!!AA"));
	printf("%d\n", ft_str_is_uppercase("AaaAaaAaaZzzZzz"));
    return 0;
}
int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 1;
	while (a != 0)
	{
		a = *str;
		if (a == 0)
			return (1);
		if (a < 65 || a > 90)
			return (0);
		str++;
	}
	return (1);
}
