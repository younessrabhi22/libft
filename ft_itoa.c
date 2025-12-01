/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:35:44 by yrabhi            #+#    #+#             */
/*   Updated: 2025/11/04 13:38:04 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcul_size(int n)
{
	long	nb;
	int		size;

	nb = n;
	size = 0;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 9)
	{
		nb /= 10;
		size++;
	}
	size++;
	return (size);
}

static void	fill_mem(char *str, int n, int size)
{
	char	c;
	long	nb;

	nb = n;
	str[size--] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
		while (size > 0)
		{
			c = (nb % 10) + '0';
			str[size--] = c;
			nb /= 10;
		}
	}
	else
	{
		while (size >= 0)
		{
			c = (nb % 10) + '0';
			str[size--] = c;
			nb /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	size = calcul_size(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	fill_mem(str, n, size);
	return (str);
}
