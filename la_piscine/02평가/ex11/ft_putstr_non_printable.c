/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongwki2 <dongwki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:14:12 by dongwki2          #+#    #+#             */
/*   Updated: 2024/08/17 20:54:00 by dongwki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	hex(char c, unsigned char *hex_arr)
{
	hex_arr[0] = '\\';
	hex_arr[1] = "0123456789abcdef"[c / 16];
	hex_arr[2] = "0123456789abcdef"[c % 16];
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	hex_arr[3];

	while (*str != 0)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			hex(*str, hex_arr);
			ft_putchar(hex_arr[0]);
			ft_putchar(hex_arr[1]);
			ft_putchar(hex_arr[2]);
		}
		str++;
	}
}
