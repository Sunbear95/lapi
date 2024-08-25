#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
