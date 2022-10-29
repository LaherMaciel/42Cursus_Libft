/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:54:06 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 18:54:06 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	new_sign(const char *str, int i)
{
	int	sign;

	if (str[i] == '-')
		sign = -1;
	return (sign);
}

size_t	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	c;

	c = 0;
	i = 0;
	while (str[i] >= 9 && str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = new_sign(str, i);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + (str[i] - '0');
		i++;
		if (c == '922337203685477580' && str[i] >= 7)
		{
			if (str[i] >= 8 && sign == -1)
				return (-9223372036854775808);
			return (9223372036854775807);
		}
	}
	return (c * sign);
}

/*
#include <stdio.h>
int main()
{
	char teste[] = "    +13a14";
	printf("%d \n", ft_atoi(teste));
}
*/