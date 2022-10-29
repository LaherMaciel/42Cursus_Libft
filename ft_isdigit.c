/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:50:36 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 20:18:11 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	i = i + 48;
	if (i >= 48 && i <= 57)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int		a;
	char	c;

	a = -10;
	while (a++ < 142)
	{
		c = ft_isdigit(a);
		if (c != 0)
		{
			if (ft_isdigit(a - 1) == 0)
				write (1, "\n\n", 2);
			write (1, &a, 1);
		}
		else
		{
			if (ft_isdigit(a - 1) != 0)
				write (1, "\n", 2);
			write (1, "NUll", 4);
		}
	}
	return (0);
}
*/