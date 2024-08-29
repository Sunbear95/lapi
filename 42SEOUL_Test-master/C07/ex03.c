#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		leng;
	char	*arr;

	leng = 0;
	i = -1;
	while (++i < size)
		leng += ft_strlen(strs[i]);
	if (size <= 0)
	{
		arr = (char *)malloc(sizeof(char) * (1));
		arr[0] = '\0';
		return (arr);
	}
	arr = (char *)malloc((leng + ((size - 1) * ft_strlen(sep)) + 1));
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

void	do_test(int size, char **strs, char *sep)
{	
	printf(" - Elements -\n[");
	for (int i = 0; i < size; i++)
	{
		printf("'%s'", strs[i]);
		if (i + 1 < size)
			printf(", ");
	}
	printf("]\n");
	printf(" - Separator: '%s' -\n", sep);
	printf(" - Result -\n");
	char *ret = ft_strjoin(size, strs, sep);
	printf("%s\n[len=%d]\n\n", ret, (int)strlen(ret));
	free(ret);
}

int		main(void)
{
	char* texts1[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "k" };
	do_test(10, texts1, ", ");
	char* texts2[] = { };
	do_test(0, texts2, ", ");
	do_test(-1, texts2, ", ");
	char* texts3[] = { "adasdsa", "", "", "zxcva", "12134", "", "@@", "!", "??", "Hello World!" };
	do_test(9, texts3, " -@- ");
	char* texts4[] = { "Doom2 - Hell on earth" };
	do_test(1, texts4, " ^^ ");
	char* texts5[] = { "Diff", "OK", ":D", "\n", "Grade:", "100" };
	do_test(6, texts5, " ");
	char* texts6[] = { "Diff", "KO", "", "\n", "Grade:", "0" };
	do_test(6, texts6, ":( ");
}
