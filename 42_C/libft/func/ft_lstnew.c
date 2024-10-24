/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:34:57 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/24 00:50:00 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	temp;
	t_list	*p;

	p = (t_list *)malloc(sizeof (t_list));
	if (p == NULL)
		return (0);
	*p = temp;
	p -> content = content;
	p -> next = 0;
	return (temp);
}
