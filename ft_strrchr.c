/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:25:14 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 18:25:14 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	while (a-- >= 0)
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
	char texto[] = "Laher eh o maior";
	ponto = '.';
	printf("%s \n", ft_strrchr(texto, ponto));
}
*/
