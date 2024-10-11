/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:34:57 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/11 16:06:32 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list = *temp;

	temp = (t_list *)malloc(sizeof t_list);
	while (!temp)
		return (0);
	temp -> content = content;
	temp *next = 0;
	return (temp);
}
