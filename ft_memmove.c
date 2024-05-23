/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:05:56 by onouma            #+#    #+#             */
/*   Updated: 2024/05/22 14:07:10 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_cpy;
	const unsigned char	*src_cpy;

	dst_cpy = (unsigned char *)dst;
	src_cpy = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += len;
		src_cpy += len;
		while (len--)
			*--dst_cpy = *--src_cpy;
	}
	return (dst);
}
