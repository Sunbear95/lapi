#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*temp;
	char	*arr; 
	
	i = 0;
	while(*strs[i])
		i++;
	arr = (char *)malloc(sizeof(char) * (size * i + (i - 1) * ft_strlen(sep)));
	temp = arr;
	while (*strs)
	{
		ft_strcpy(arr, *strs);
		ft_strcpy(arr, sep);
		strs++;
	}
	return (temp);
}

void do_test(int min, int max)
{
	int *p;
	int len;
	len = ft_ultimate_range(&p, min, max);
	printf("ft_ultimate_range(&p, %d, %d): [len %d] ", min, max, len);
	for  (int i = 0; i < max - min; i++)
		printf("%d ", p[i]);
	printf("_\n");
}

int main(void)
{
	int *p;
	printf("ft_ultimate_range(&p, 0, 0): %d, %p\n", ft_ultimate_range(&p, 0, 0), p);
	printf("ft_ultimate_range(&p, 1, 0): %d, %p\n", ft_ultimate_range(&p, 1, 0), p);
	printf("ft_ultimate_range(&p, 2, 0): %d, %p\n", ft_ultimate_range(&p, 1, 0), p);
	printf("ft_ultimate_range(&p, 0, 3): %d, %d\n", ft_ultimate_range(&p, 0, 3), p > 0);
	printf("ft_ultimate_range(&p, 2, 5122): %d, %d\n", ft_ultimate_range(&p, 2, 5122), p > 0);
	// printf("ft_range(0, 2147483647): %p\n", ft_range(0, 2147483647));
	do_test(-5, 5);
	do_test(-10, 10);
	do_test(34, 45);
	do_test(0, 10);
	return 0;
}
