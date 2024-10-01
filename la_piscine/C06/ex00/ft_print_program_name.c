/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:00:26 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 14:13:33 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

	i = argc;
	ft_putchar(argv[0], ft_strlen(argv[0]));
	ft_putchar("\n", 1);
	return (0);
}
