/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:39:47 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/18 14:47:51 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <memory.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while(str[i] != '\0')
	{
		while(str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				i++;
				return (&str[i]);
			}
		}
		i++;
	}
	if (str[i] == '\0')
		return (0) ;
}

void do_test(char* str, char* to_find)
{
	printf("Your: %s\n", ft_strstr(str, to_find));
	printf("CStdLib: %s\n", strstr(str, to_find));
}

int main(void)
{
    do_test("Hello 42 SEOUL!!! 42 is true?!", " ");
    do_test("", "43");
    do_test("", "");	    do_test("", "");
    do_test("Hello 42 SEOUL!!! 4343434343?!", "");
    do_test("Hello 42 SEOUL!!! 42 is true?!", "true?!");
    do_test("Hello 42 SEOUL!!! 42 is true?!", "");
    do_test("ASDF", "");
    return 0;
}
