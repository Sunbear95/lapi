#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2, int i)
{
    int j;

    j = 0;
    while (s2[j] != '\0')
    {
        if (s1[i] == s2[j])
            return 0;
        j++;
    }
    return 1;
}

char *ft_range(int min, int max, char *str)
{
    char *arr;
    int i;

    arr = (char *)malloc(sizeof(char) * (max - min + 1));
    i = 0;
    while (min < max)
        arr[i++] = str[min++];
    arr[i] = '\0';
    return (arr);
}

char **ft_split(char *str, char *charset)
{
    int i;
    int k;
    int j;
    char **arr;

    i = 0;
    k = 0;
    j = 0;
    arr = (char **)malloc(sizeof(char *) * (strlen(str) + 1));
    while (str[i])
    {
        if (!ft_strcmp(str, charset, i))
        {
            if (i > j)
                arr[k++] = ft_range(j, i, str);
            j = i + 1;
        }
        i++;
    }
    if (i > j)
        arr[k++] = ft_range(j, i, str);
    arr[k] = NULL;
    return (arr);
}

void do_test(char* str, char* charset)
{
	char	**array;
	int		i;

	array = ft_split(str, charset);
	i = 0;
	while (array[i])
	{
		printf("'%s' (len=%d)\n", array[i], (int)strlen(array[i]));
		i++;
	}
}

int main(void)
{
	do_test(",1,2,3", ",");
	do_test("Hello.,World,.!!KOKO!ZZZ.Hello.Good.World!KK!ZORO,Good", ",.!");
	do_test("abcakaabcaakaabce", "bck");
	do_test("|---AA-|GoogooGooGoo|aaaa-| Hello World Good| ^^|Nice Boat!", " |-");
	do_test("               ", "     ");
	do_test("  \t ", " \t");
	do_test("123,456,789 ,", ",l1");
	do_test("0tNue8", "0tNue8");
	do_test("80hzNIGZYoIa3ATwY8dRCFmBBYx0RAAKfwjEAKfwjEAKfwjE", "AKfwjE5l");
	return 0;
}
