#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int main(void)
{
	for (int i = -5; i < 30; i++)
		printf("%d %d %d %d %d %d %d\n",
			ft_recursive_power(0, i),
			ft_recursive_power(1, i),
			ft_recursive_power(2, i),
			ft_recursive_power(3, i),
			ft_recursive_power(4, i),
			ft_recursive_power(5, i),
			ft_recursive_power(10, i));
	return 0;
}

int	ft_recursive_power(int nb, int power)
{
	if (0 > power)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
