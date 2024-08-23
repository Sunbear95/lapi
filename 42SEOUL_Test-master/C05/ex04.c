#include <stdio.h>

int		ft_fibonacci(int index);

int main(void)
{
	for (int i = -5; i < 40; i++)
		printf("%d,", ft_fibonacci(i));
	printf("\n");
	return 0;
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
