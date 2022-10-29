/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:21:40 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/29 23:33:56 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	d = (char *) malloc(len * sizeof(char) + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i <= len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}