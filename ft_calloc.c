/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:05:36 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/29 22:35:37 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t n, size_t size)
{
    void  *i;

    i = malloc(n * size);
    if (!i)
        return (NULL);
    ft_bzero(i, size);
    return (i);
}