/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:01 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/07 20:15:41 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	d;
	size_t	i;
	size_t	s;
	char	*trim;

	d = ft_strlen(s1) + 1;
	s = ft_strlen(set);
	j = 0;
	while (set[j] == s1[j])
		j++;
	while (set[s] == s1[d])
	{
		d--;
		s--;
	}
	trim = (char *) malloc((d - j) * sizeof(char) + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (j < d)
	{
		trim[i] = s1[j];
		i++;
		j++;
	}
	trim[i] = '\0';
	return (trim);
}
