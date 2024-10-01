#include <stdio.h>
#include <unistd.h>
void ft_putnbr_base(int nbr, char *base);
int main(void)
{
	ft_putnbr_base(1234567890, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "01");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "0123456");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "01234");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQ");
	write(1, "\n", 1);
	write(1, "\n", 1);

	ft_putnbr_base(1234567890, ")!@#$%^&*(");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "OI");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "\'\"\?>.<,QWERT ABC");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "aQqR Tt");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "=_|{}");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "ZXCS DF12345;:'\"qwertyas@#$");
	write(1, "\n", 1);

	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= ");
	write(1, "\n", 1);
	ft_putnbr_base(0, "!@#$");
	write(1, "\n", 1);
	write(1, "\nT1: ", 5);
	ft_putnbr_base(12345, "1234563");
	write(1, "\nT2: ", 5);
	ft_putnbr_base(12345, "12345-64");
	write(1, "\nT3: ", 5);
	ft_putnbr_base(12345, "12345678+");
	write(1, "\nT4: ", 5);
	ft_putnbr_base(12345, "1");
	write(1, "\nT5: ", 5);
	ft_putnbr_base(12345, "");
	write(1, "\nT6: ", 5);
	ft_putnbr_base(12345, "a12356a7");
	write(1, "\n", 1);
	return 0;
}
int	ch_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ch_leng(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	recur_putchar(int nbr, char *base, int leng_base)
{
	char	a;

	if (nbr == 0)
		return ;
	if (nbr < 0)
	{
		a = base[-(nbr % leng_base)];
		recur_putchar((nbr / leng_base), base, leng_base);
		write (1, &a, 1);
	}
	else
	{
		a = base[nbr % leng_base];
		recur_putchar((nbr / leng_base), base, leng_base);
		write (1, &a, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		leng_base;
	char	zero;

	leng_base = ch_leng(base);
	if (leng_base == 0 || leng_base == 1 || ch_base(base))
		return ;
	if (nbr == 0)
	{
		zero = base[0];
		write(1, &zero, 1);
		return ;
	}
	if (nbr < 0)
		write(1, "-", 1);
	recur_putchar(nbr, base, leng_base);
}
