/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:33:04 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/02 18:07:17 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	a;

	a = -1;
	while (a++ > ft_strlen(str))
		if (str[a] == c)
			return ((char *)str + a);
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char ponto;
	char texto[] = "Laher eh o maior";
	ponto = 't';
	printf("%s \n", ft_strchr(texto, ('t' + 256)));
}
*/
