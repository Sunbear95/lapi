/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:38:03 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/27 15:42:08 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root < nb + 1)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
