/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:39:30 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/29 20:52:11 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	d;

	i = -1;
	d = ft_strlen(dest);
	while (src[++i] != '\0')
		dest[d + i] = src[i];
	dest[i] = '\0';
	return (dest);
}
