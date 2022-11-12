/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:04:51 by marvin            #+#    #+#             */
/*   Updated: 2022/11/08 16:04:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pos_search(const char *str, int c)
{
	size_t	a;

	a = -1;
	while (++a <= ft_strlen(str))
		if (str[a] == c)
			return (a);
	return (-1);
}

size_t	ft_skip(const char *str, int c)
{
	size_t	a;

	a = -1;
	while (++a < ft_strlen(str))
		if (str[a] != c)
			return (a);
	return (-1);
}

size_t	find_size(const char *s, char c)
{
	size_t	start;
	size_t	sep;
	size_t	i;

	start = 0;
	i = 0;
	sep = 0;
	while (sep != (size_t) -1)
	{
		i++;
		if (ft_skip(s + (start + sep), c) != (size_t) - 1)
			start = start + sep + ft_skip(s + (start + sep), c);
		else if (ft_skip(s + (start + sep), c) == (size_t) - 1)
			break ;
		sep = ft_pos_search((s + start), c);
	}
	return (i);
}

char	**ft_terminator(const char *s, char c, char **splited)
{
	size_t	start;
	size_t	sep;
	size_t	i;

	start = 0;
	i = 0;
	sep = 0;
	while (sep != (size_t) -1)
	{
		if (ft_skip(s + (start + sep), c) != (size_t) - 1)
			start = start + sep + ft_skip(s + (start + sep), c);
		else if (ft_skip(s + (start + sep), c) == (size_t) - 1)
			break ;
		sep = ft_pos_search((s + start), c);
		if (sep != (size_t) - 1)
			splited[i] = ft_substr(s, start, sep);
		else if (sep == (size_t) - 1)
			splited[i] = ft_substr(s, start, ft_strlen(s + start));
		i++;
	}
	splited[i] = '\0';
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;

	if (s[0] == '\0')
		splited = (char **) malloc(sizeof(char *));
	else
		splited = (char **) malloc(find_size(s, c) * sizeof(char *) + 1);
	if (!splited)
		return (NULL);
	return (ft_terminator(s, c, splited));
}
