/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:46:46 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/14 18:24:47 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	n;
	int	*bat;

	n = 0;
	z = 0;
	a = 0;

	bat = &n;
	
	while (n != size)
	{
		*(bat + size-n) = *(tab + n);
		n++;
	}
}

int main()
{
	ft_rev_int_tab(123456789,9);
	write (1, bat, size);
return 0
}
