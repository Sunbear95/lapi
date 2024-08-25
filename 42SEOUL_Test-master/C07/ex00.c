#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)
{
	printf("Your: %s\n", ft_strdup("Hello World!"));
	printf("CStdLib: %s\n", strdup("Hello World!"));
	printf("Your: %s\n", ft_strdup("ㅋㅋㅋ"));
	printf("CStdLib: %s\n", strdup("ㅋㅋㅋ"));
	return 0;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strcpy(copy, src);
	return (copy);
}
