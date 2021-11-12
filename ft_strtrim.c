/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <aymoulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:07:40 by aymoulou          #+#    #+#             */
/*   Updated: 2021/11/11 21:43:38 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_memchr(set, s1[i], ft_strlen(set)) && s1[i])
	{
		i++;
	}
	return (i);
}

static size_t	trim_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (ft_memchr(set, s1[i], ft_strlen(set)) && s1[i] >= 0)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	size_t			end;
	size_t			start;
	size_t			i;

	if (!s1 || !set)
		return (0);
	end = trim_end(s1, set);
	start = trim_start(s1, set);
	if (start == ft_strlen(s1) || !*s1)
		return (ft_strdup(""));
	str = (char *) malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (0);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
