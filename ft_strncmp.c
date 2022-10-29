/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:44:33 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/28 19:44:33 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	a;

	a = 0;
	while (str1[a] != '\0' && str2[a] != '\0' && a <= n)
	{
		if (str1[a] != str2[a])
			return (str1[a] - str2[a]);
		a++;
	}
	return (0);
}

/*
int main()
{
    char text1[] = "ana";
    char text2[] = "aNA";
    printf("Original: \t%d \n", strncmp(text1, text2, 3));
    printf("Fake: \t\t%d \n", strncmp(text1, text2, 3));
}
*/
