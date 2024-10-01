
#include <stdio.h>
char* ft_strcapitalize(char *str);
int main(void)
{
    char text1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(text1));
    char text2[] = "a wOR23d 3is a STRin3G of ++aLphanuEeric .cHarac3ters.";
	printf("%s\n", ft_strcapitalize(text2));
    return 0;
}
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str [i] += 32;
		i++;
	}
	i = 0;
	while (str[i + 1] != 0)
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] -= 32;
		if ((str[i] < '0' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			&& (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
