/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:22:00 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/15 22:12:24 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (*src != '\0' && dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (src_len);
}
