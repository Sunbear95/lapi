/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:26:16 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 10:34:24 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//행 i 열 j try

char	*arr_row_decision(int j, int k)
{
	char	*arrrow[7]
	int	a;
	int	b;
	
	a = argv[2][10 + k];
	b = argv[2][14 + k];
	
	*arrrow == div(a, b);
	return (arrrow[2*j + 1]);
}
int	arrsame(int k)
{
	int	l;
	char	temp

	l = 0;
	
	while (l < 4)
	{
		temp = *arrrow(l, k)
		while (arr2d[i][j] == temp)//arr는 row(1+j)left와 row(1+j)right 로 결정됨.
		{
			l++;				
		}
	}
}

# arr_check(int i, j)
{
	int	k = 0;
	while (k <  4)
	{
		arr2d[i][] = arrupin
		if (arrsame(k))//arr2d 선언은 어디서?
			return 0;
		k++
	}
	return 1;
}
