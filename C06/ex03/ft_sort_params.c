/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:26:56 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 22:12:36 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

void	ft_strcmp(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i + 1 < argc)
	{
		j = i + 1;
		while (j < argc)
		{	
			k = 0;
			while (argv[i][k] == argv[j][k] && argv[i][k] && argv[j][k])
				k++;
			if (argv[i][k] > argv[j][k])
				ft_swap(argv, i, j);
			j++;
		}
		i++;
	}
}

void	ft_putchar(char *c, int len)
{
	write(1, c, len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_strcmp(argc, argv);
	while (i < argc)
	{
		ft_putchar(argv[i], ft_strlen(argv[i]));
		ft_putchar("\n", 1);
		i++;
	}
	return (0);
}
