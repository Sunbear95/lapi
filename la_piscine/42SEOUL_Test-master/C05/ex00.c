#include <stdio.h>

int		ft_iterative_factorial(int nb);

int main(void)
{
	for (int i = -5; i < 40; i++)
		printf("%d\n", ft_iterative_factorial(i));
	return 0;
}
int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fac = 1;
	while (0 < nb)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
