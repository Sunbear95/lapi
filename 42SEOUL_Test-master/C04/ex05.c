#include <stdio.h>
int	ch_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_pn(char **str)
{
	int	count;

	count = 0;
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count++;
		(*str)++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	cmp(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (str[i] != base[j])
	{
		j++;
		if (base[j] == 0)
			return(-1);
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	min;
	int	i;
	int	lg;

	i = -1;
	lg = 0;
	if (ch_base(base) <= 1)
		return (0);
	min = ft_pn(&str);
	while (str[++i] != 0)
	lg++;
	n = 0;
	i = 0;
	while (i < lg)
	{
		if (cmp(str, base, i) == -1)
			break ;
		n = ch_base(base) * n + cmp(str, base, i);
		i++;
	}
	return (min * n);
}

void test(char *str, char *base)
{
    int res = ft_atoi_base(str, base);
    printf("%d\n", res);
}

int main(void)
{
    test("4242", "");
    test("4242", "4");
    test("1000010010010", "01");
    test("4242", "012345678+");
    test("4242", "012345678-");
    test("4242", "012345678 ");
    test("4242", "012345678\t");
    test("4242", "012345678\n");
    test("4242", "012345678\v");
    test("4242", "012345678\f");
    printf("---\n");
    test("4242", "abcdefghij");
    printf("---\n");
    test(" \t\n\v\f+1234", "0123456789");
    test(" \t\n\v\f+-1234", "0123456789");
    test(" \t\n\v\f+--1234", "0123456789");
    test(" \t\n\v\f-+-1234", "0123456789");
    test(" \t\n\v\f-+--1234", "0123456789");
    test(" \t\n\v\f-+-1234a", "0123456789");
    test(" \t\n\v\f-+-123a4", "0123456789");
    test(" \t\n\v\f-+-12a34", "0123456789");
    test(" \t\n\v\f-+-1a234", "0123456789");
    test(" \t\n\v\f-1234-", "0123456789");
    test(" \t\n\v\f+1234-", "0123456789");
    printf("---\n");
    test(" \t\n\v\f-+-IOI", "OI");
    test(" \t\n\v\f-+-!@!", "@!");
    test(" \t\n\v\f-+-^%^", "%^");
    printf("---\n");
    test("4242", "0123456788");
    test("4242", "0123456784");
    return 0;
}
