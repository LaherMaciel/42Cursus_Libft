/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:33:04 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 21:33:48 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	a;

	a = -1;
	while (a++ >= 0)
	{
		if (str[a] == c)
			return (str + a);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char ponto;
	char texto[] = "www.ditgo.com";
	ponto = 't';
	printf("%s \n", ft_strchr(texto, ('t' + 256)));
}
*/
