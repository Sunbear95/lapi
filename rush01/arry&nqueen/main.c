/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:38:49 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 14:23:35 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*0_arr(void)
{
	char	*arr2d[4][4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			arr[i][j] = "0";
			j++;
		}
		i++;
	}
	return (arr2d);
}

int error(**argv)
{
	while (i < 4)
	{
		if (argv[0][i] + argv[1][i] < 6 && argv[0][i] + argv[1][i] > 2)
			return (0);
	}
}

int	main(char argc, char **argv)
{
	if (argc == (17 || 26 || 37 || 50 || 65 || 82))
	{
		if (error)
			write(1, "Error\n", 6);
			return (0);
			0_arr;
			queening(0, arr2d);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
