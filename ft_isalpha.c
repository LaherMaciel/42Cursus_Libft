/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:41:14 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 20:13:00 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
		c = ft_isalpha(a);
		if (c != 0)
		{
			if (ft_isalpha(a - 1) == 0 && a - 1 >= 0)
				write (1, "\n\n", 2);
			write (1, &a, 1);
		}
		else
		{
			if (ft_isalpha(a - 1) != 0 && a - 1 >= 0)
				write (1, "\n", 2);
			write (1, "NUll", 4);
		}
	}
	return (0);
}
*/
