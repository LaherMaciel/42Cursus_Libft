/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:39:30 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/02 18:01:33 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, const char *src)
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

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[] = "BBBB0000000000000000000000000";
	char source[] = "AAAAAAAAA";
	printf("Original \t-> %lu \n", strlcat(dest, source, 6));
	printf("Fake \t\t-> %zu \n", ft_strlcat(dest, source, 6));	
}
*/
