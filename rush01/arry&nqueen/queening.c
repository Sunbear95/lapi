/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queening.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:17:56 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 14:32:37 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void queening(int i, char *arr2d)
{
	int try;

	if (arr_check(i, try))
	{
		if(i == 4) //n 은 전역선언, 4x4일 때
		{
			printarr();
			return ;
		}
		else
		{
			try = 1;
			while (try <= 4)
			{
				queening(i + 1, arr2d);
				try++;
			}
		}
	}
}
