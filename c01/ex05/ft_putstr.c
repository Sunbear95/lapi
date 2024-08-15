/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:02:56 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/15 20:15:37 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		n;
	char	nul;

	nul = ' ';
	n = 0;
	while (nul != '\0')
	{
		nul = *(str + n);
		n++;
	}
	write (1, str, n);
}

int	main(void)
{
	ft_putstr("dfaags");
}
