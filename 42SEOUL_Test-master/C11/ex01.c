#include <stdio.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

int		plus_alpha(int nb)
{
	return (nb + 100);
}

int main(void)
{
	int tab[10];
	for (int i = 0; i < 10; i++)
		tab[i] = i * i;
	int *arr = ft_map(tab, 10, &plus_alpha);
	for (int i = 0; i < 10; i++)
	{
		tab[i] = 0;
		printf("%d\n", arr[i]);
	}
	return (0);
}
