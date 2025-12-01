/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:51:42 by yrabhi            #+#    #+#             */
/*   Updated: 2025/10/23 09:43:41 by yrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dest;

	ptr_src = (const unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (!dest || !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	else if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		ptr_dest[n - 1] = ptr_src[n - 1];
		n--;
	}
	return (dest);
}
