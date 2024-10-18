/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:56:10 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/18 15:11:56 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*temp;
	int		len;
	int		i;

	temp  = ft_itoa(n);
	len = ft_strlen(temp);
	i = -1;
	while (++i < len)
		write (fd, &temp[i], 1);
}
