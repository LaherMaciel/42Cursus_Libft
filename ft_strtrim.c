/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:01 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/07 21:22:15 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
size_t	ft_in(char const *src, char const *set, size_t set_size)
{
	size_t	i;
	size_t	j;
	size_t	d;

	d = 0;
	i = 0;
	while (i < set_size)
	{
		j = 0;
		while (j < set_size)
		{
			if (set[j] == src[i])
			{
				d++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (d);
}

size_t	ft_fim(char const *src, char const *set, size_t set_size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	g;

	i = 0;
	g = ft_strlen(src);
	d = 0;
	while (i <= set_size)
	{
		j = 0;
		while (j < set_size)
		{
			if (src[g - i] == set[j])
			{
				d++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (g - d);
}
 */

char	*ft_strtrim(char const *src, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s;
	char	*trim;

	/*
	j = ft_in(src, set, ft_strlen(set));
	s = ft_fim(src, set, ft_strlen(set)) - j; 
	*/
	trim = (char *) malloc(s * sizeof(char) + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (i < s)
	{
		trim[i] = src[j];
		i++;
		j++;
	}
	trim[i] = '\0';
	return (trim);
}
