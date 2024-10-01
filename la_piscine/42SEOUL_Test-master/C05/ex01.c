#include <stdio.h>

int		ft_recursive_factorial(int nb);

int main(void)
{
	for (int i = -5; i < 40; i++)
		printf("%d\n", ft_recursive_factorial(i));
	return 0;
}


int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
