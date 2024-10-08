/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:31:35 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/18 01:23:24 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 1;
	while (a != 0)
	{
		a = *str;
		if (a == 0)
			return (1);
		if (a < 65 || (a < 97 && a > 90) || a > 122)
			return (0);
		str++;
	}
	return (1);
}
