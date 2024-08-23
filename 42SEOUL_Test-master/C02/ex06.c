
#include <stdio.h>
int ft_str_is_printable(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_printable("\x1\x2\x3""asdf"));
	printf("%d\n", ft_str_is_printable("aaa\x8F\x5D\x80""aaa"));
	printf("%d\n", ft_str_is_printable("\x35\x2E\x20\x7E\x7F"));
	printf("%d\n", ft_str_is_printable("AaAa\x80\x81\x8E"));
	printf("%d\n", ft_str_is_printable("aa aa"));
	printf("%d\n", ft_str_is_printable("2745AA"));
	printf("%d\n", ft_str_is_printable("AaaAaaAaaZzzZzz"));
    return 0;
}
int	ft_str_is_printable(char *str)
{
	int	n;

	n = 1;
	while (n != 0)
	{
		n = *str;
		if (n == 0)
			return (1);
		if (n < 32 || n > 126)
			return (0);
		str++;
	}
	return (1);
}
