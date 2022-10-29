/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:50:42 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/29 19:58:12 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	*d = dest;
	*s = src;
	i = 0;
	while (s[i] != '\0' && i <= n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);




	//siahdkjahsjda
}
