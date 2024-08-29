/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:10:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/29 18:48:11 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nword(char *str)
{
	int i;
	int	up;
	int	num;
	
	i = 0;
	up = 1;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			up = 1;
			i++;
		}
		while (up = 1 && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			up = 0;
			i++;
			num++;
		}
	}
	return (num);
}

int	strlen(*str)
{
	int	i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return(i);
}

char **ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	arr[10000];

	i = 0;
	while (i < nword(str))
	{
		j = 0;
		while (str[j])
		{
			while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
				j++;
			k = 0;
			while (!(str[j + k] == ' ' || str[j + k] == '\t' ||
				str[j + k] == '\n' || str[j + k] == 0)
				k++;
			arr[i] = (char *)malloc(sizeof(char) * (k + 1);
			while (
			arr = ft_molloc
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
