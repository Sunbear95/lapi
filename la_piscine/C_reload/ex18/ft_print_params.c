/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:14:41 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/27 16:15:35 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
	int	temp;

	i = 1;
	while (i < argc)
	{
		temp = -1;
		while (++temp < ft_strlen(argv[i]))
			ft_putchar(argv[i][temp]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
