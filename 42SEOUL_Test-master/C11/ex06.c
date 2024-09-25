#include <stdio.h>

int	ft_strlen(char **str)
{
	int	i;
	//str[i]
	i = 0;
	while (str[i] !=0)
		i++;
	// printf("%d",
	// return (i);
	return (i);
}

void	ft_swap(char **tab, int i, int j)
{
	char	*temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}


void print_string (char **str)
{
	int i = 0;
	while (i < 12)
	{
		printf("%s ", str[i]);
		i++;
		printf("\n");
	}
	printf("\n");
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	k;
	
	i = 0;
	while (i + 1 < ft_strlen(tab))
	{
		j = i + 1;
		while (j < ft_strlen(tab))
		{
			k = 0;
			while (tab[i][k] == tab[j][k] && tab[i][k] && tab[j][k])
				k++;
			if ((unsigned char)tab[i][k] - (unsigned char)tab[j][k] > 0)
				ft_swap(tab , i, j);
			j++;
			print_string(tab);
		}
		i++;
	}
}

int main(void)
{
	char *tab[] = {
		"Hello hello hello",
		"Hello 11234",
		"",
		"Go Thourh",
		"134",
		"!!!!!",
		"\?!\?!\?!\?\?!\?!\?!",
		"::*#$@Hell",
		"42 Seoul La Piscine",
		"dk whfflek",
		"anjsrk tmftmf whfflsmsrj rkxdmsep zz",
		"gma ;;",
		0
	};
	ft_sort_string_tab(tab);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
