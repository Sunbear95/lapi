
#include <stdio.h>
char* ft_strlowcase(char *str);
int main(void)
{
    char text1[] = "asdfasdf";
	printf("%s\n", ft_strlowcase(text1));
    char text2[] = "ASDFasdf";
	printf("%s\n", ft_strlowcase(text2));
    char text3[] = "ASSDDGBZAQ";
	printf("%s\n", ft_strlowcase(text3));
    char text4[] = "asdf1145aa";
	printf("%s\n", ft_strlowcase(text4));
    char text5[] = "aa aa";
	printf("%s\n", ft_strlowcase(text5));
    char text6[] = "2745!!AA";
	printf("%s\n", ft_strlowcase(text6));
    char text7[] = "AaaAaaAaaZzzZzz";
	printf("%s\n", ft_strlowcase(text7));
    return 0;
}
char	*ft_strlowcase(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str [i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
