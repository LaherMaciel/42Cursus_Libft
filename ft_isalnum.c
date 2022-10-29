/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:57:19 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 20:13:07 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int		a;
	char	c;

	a = -1;
	while (a++ < 127)
	{
		c = ft_isalnum(a);
		if (c != 0)
		{
			if (ft_isalnum(a - 1) == 0 && a - 1 >= 0)
				write (1, "\n\n", 2);
			write (1, &a, 1);
		}
		else
		{
			if (ft_isalnum(a - 1) != 0 && a - 1 >= 0)
				write (1, "\n", 2);
			write (1, "NUll", 4);
		}
	}
	return (0);
}
*/
