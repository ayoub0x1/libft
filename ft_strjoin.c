/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:03:32 by aymoulou          #+#    #+#             */
/*   Updated: 2021/08/19 18:05:53 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!(join))
		return (NULL);
	while (s1[i])
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		join[j] = s2[i];
		j++;
		i++;
	}
	join[j] = '\0';
	return (join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	return (ft_join(s1, s2));
}
