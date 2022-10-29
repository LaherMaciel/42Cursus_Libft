/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:44:42 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 19:44:42 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (little[0] == '\0')
		return (big);
	while (big[a] != '\0' && a < len)
	{
		if (big[a] == little[b])
			b++;
		else
			b = 0;
		if (little[b] == '\0')
			return (big + (a - b));
		a++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char ponto[] = "cd";
	char haystack[30] = "aaabcabcd";
	printf("%s \n", ft_strnstr(haystack, ponto, 6));
}
*/
