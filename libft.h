/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:59:53 by aymoulou          #+#    #+#             */
/*   Updated: 2021/08/31 13:41:00 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Vector with x and y coordinates */
typedef struct s_vector
{
	int	x;
	int	y;
}				t_vector;

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
long long	ft_atoi(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int	fd);
void		ft_putendl_fd(char *s, int fd);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strnstr(const char *haystack, const	char *needle, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);

#endif
