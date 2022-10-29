/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:28:42 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 20:22:41 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 127)
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
		c = ft_isprint(a);
		if (c != 0)
		{
			if (ft_isprint(a - 1) == 0)
				write (1, "\n\n", 2);
			write (1, &a, 1);
		}
		else
		{
			if (ft_isprint(a - 1) != 0)
				write (1, "\n", 2);
			write (1, "NUll", 4);
		}
	}
	return (0);
}
*/
