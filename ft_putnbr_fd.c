/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:35:45 by aymoulou          #+#    #+#             */
/*   Updated: 2021/09/25 13:14:20 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		a = -n;
	}
	if (a > 9)
	{
		ft_putnbr_fd((a / 10), fd);
		ft_putchar_fd((a % 10) + '0', fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}
