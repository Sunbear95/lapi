/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:43:12 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/16 11:28:32 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int	a = 351;
	int	b = 7;
	int	*div;
	int	*mod;
	div = &a;
	mod = &b;
	ft_div_mod(a,b,div,mod);
	printf("%d, %d", *div, *mod);
return 0;
}	
