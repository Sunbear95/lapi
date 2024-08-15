/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:24:10 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/15 13:43:30 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	swap(int *tab, int *bat, int size)
{
	int	c;
	int	i;

	while (i <= size)
	{
		c = *(tab + 1);
		*tab = *bat;
		*bat = c;
		i++;
	}
}
	
void	ft_sort_in_tab(int *tab, int size)
{
	int	n;
	int	i;
	int	j;
	int	*bat;
	
	n = 0;
	j = 0;
	*bat = &n;
	while (n == size)
	{
		j = 0;
		while (tab[n] < tab[j])
		{
			bat[n] = tab[j]			
			j++;
		}	
		n++;
	}
	*tab = 

