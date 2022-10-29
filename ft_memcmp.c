/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:19:18 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 19:48:04 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			a;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) str1;
	c2 = (unsigned char *) str2;
	a = 0;
	while (c1[a] != '\0' && c2[a] != '\0' && a <= n)
	{
		if (c1[a] != c2[a])
		{
			if ((c1[a] - c2[a]) < 0)
				return (-1);
			else
				return (1);
		}
		a++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
    char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
    printf("Original: \t%d \n", memcmp(s2, s3, 4));
    printf("Fake: \t\t%d \n", ft_memcmp(s2, s3, 4));
}
*/
