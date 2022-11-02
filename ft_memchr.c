/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:48:30 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/02 19:11:27 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t			a;
	unsigned char	*s;

	s = (unsigned char *)str;
	a = -1;
	while (++a < n)
		if (s[a] == c)
			return (str + a);
	return (0);
}
