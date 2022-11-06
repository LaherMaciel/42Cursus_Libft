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
	size_t	a;
	size_t	b;

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
			return (big + (a - (b - 1)));
		a++;
	}
	return (0);
}
