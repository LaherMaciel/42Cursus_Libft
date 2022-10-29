/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:23:57 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 21:17:53 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
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
		c = ft_isascii(a);
		if (c != 0)
		{
			if (ft_isascii(a - 1) == 0)
				write (1, "\n\n", 2);
			write (1, "1", 1);
		}
		else
		{
			if (ft_isascii(a - 1) != 0)
				write (1, "\n", 2);
			if (a > 126)
				write (1, "NUll", 4);
			else
				write (1, "NUll ", 5);
		}
	}
	return (0);
}
*/
