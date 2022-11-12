/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:24:43 by marvin            #+#    #+#             */
/*   Updated: 2022/11/09 22:24:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digits(long int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	if (n <= 9)
		i++;
	else
		i = i + 1 + count_digits(n / 10);
	return (i);
}

char	*writhing(long int n, char *ito, size_t size)
{
	if (n < 0)
	{
		ito[0] = '-';
		if (n <= -2147483648)
		{
			ito[1] = '2';
			n = -147483648;
		}
		n = n * (-1);
	}
	if (n <= 9)
		ito[size] = n + 48;
	else
	{
		ito[size] = n % 10 + 48;
		ito = writhing(n / 10, ito, size - 1);
	}
	return (ito);
}

char	*ft_itoa(int n)
{
	size_t		size;
	char		*ito;

	size = count_digits(n);
	ito = (char *) malloc(size * sizeof(char) + 1);
	if (!ito)
		return (NULL);
	ito = writhing(n, ito, size - 1);
	ito[size] = '\0';
	return (ito);
}

/*int	main(void)
{
	size_t n = 1231209381;
	//printf("div: \t%ld \n",count_digits(-1234567890));
	printf("Numero  %ld -> \t%s \n", n, ft_itoa(n));
	//printf("Numero -13 -> \t%s \n", ft_itoa(0));
	return (0);
}*/