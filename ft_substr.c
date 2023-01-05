/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:21:40 by lwencesl          #+#    #+#             */
/*   Updated: 2023/01/05 19:49:16 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*dest;

	cont = 0;
	while ((start + cont) < ft_strlen(s) && cont < len)
		cont++;
	dest = (char *) malloc(cont * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	cont = 0;
	while ((start + cont) < ft_strlen(s) && cont < len)
	{
		dest[cont] = s[start + cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
