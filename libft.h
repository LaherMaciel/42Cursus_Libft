/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:20:26 by lwencesl          #+#    #+#             */
/*   Updated: 2022/10/29 23:35:31 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_isascii(int a);
int		ft_isprint(int a);
int		ft_isalnum(int a);
int		ft_isalpha(char c);
int		ft_isdigit(int i);
int		ft_tolower(int a);
int		ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t n, size_t size);
size_t	ft_strlen(const char *a);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strnstr(char *big, const char *little, size_t len);
size_t	ft_atoi(const char *str);
char	*strdup(const char *s);
void	*ft_memchr(void *str, int c, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
