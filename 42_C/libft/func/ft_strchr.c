/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:35:13 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/03 11:45:00 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*strchr(const char *string, int c)
{
	int	i;

	i = -1;
	while (string[++i] != c)
	return (string[i]);
}
