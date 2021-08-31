/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:50:17 by auymoulou         #+#    #+#             */
/*   Updated: 2021/08/19 17:50:57 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*ssrc;

	dest = (char *)dst;
	ssrc = (char *)src;
	if (src == dst)
		return (dst);
	if (!dest && !ssrc)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = ssrc[i];
		i++;
	}
	return (dst);
}
