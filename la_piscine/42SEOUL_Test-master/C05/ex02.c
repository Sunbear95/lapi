#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int main(void)
{
	for (int i = -5; i < 30; i++)
		printf("%d %d %d %d %d %d %d\n",
			ft_iterative_power(0, i),
			ft_iterative_power(1, i),
			ft_iterative_power(2, i),
			ft_iterative_power(3, i),
			ft_iterative_power(4, i),
			ft_iterative_power(5, i),
			ft_iterative_power(10, i));
	return 0;
}

int	ft_iterative_power(int nb, int power)
{
	int	jegob ;

	jegob = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (0 < power--)
		jegob *= nb;
	return (jegob);
}