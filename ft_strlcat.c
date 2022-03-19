/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:22:27 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/17 13:42:15 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	while (dst[dst_len] != '\0')
		dst_len++;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	dst += dst_len;
	while (*src != '\0' && dstsize-- > dst_len + 1)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len + dst_len);
}
