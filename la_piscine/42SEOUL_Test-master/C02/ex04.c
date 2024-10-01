
#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_lowercase("asdfasdf"));
	printf("%d\n", ft_str_is_lowercase("ASDFasdf"));
	printf("%d\n", ft_str_is_lowercase("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_lowercase("asdf1145aa"));
	printf("%d\n", ft_str_is_lowercase("aa aa"));
	printf("%d\n", ft_str_is_lowercase("2745!!AA"));
	printf("%d\n", ft_str_is_lowercase("AaaAaaAaaZzzZzz"));
    return 0;
}
int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 1;
	while (a != 0)
	{
		a = *str;
		if (a == 0)
			return (1);
		if (a < 97 || a > 122)
			return (0);
		str++;
	}
	return (1);
}
