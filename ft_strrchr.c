/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:35:02 by onouma            #+#    #+#             */
/*   Updated: 2024/05/23 14:42:54 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s + ft_strlen(s);
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
