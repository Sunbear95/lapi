/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:12:30 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/25 16:18:46 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	temp;

	temp = 'a' - 1;
	while (++temp <= 'z')
		ft_putchar(temp);
}
