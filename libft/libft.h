/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <askokov-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:04:43 by askokov-          #+#    #+#             */
/*   Updated: 2023/10/09 18:26:10 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);

void	*ft_memset(void *str, int c, size_t n);

void	*ft_memmove(void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		ft_isprint(int c);

int		ft_isdigit(int x);

int		ft_isascii(int c);

int		ft_isalpha(int c);

int		ft_isalnum(int c);

void	ft_bzero(void *str, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_toupper(int ch);

int		ft_tolower(int ch);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t nitems, size_t size);

char	*ft_strdup(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len);

#endif