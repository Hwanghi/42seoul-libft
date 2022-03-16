/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:08:17 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/15 20:03:38 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	char	*trim;
	size_t	dstsize;
	size_t	src_len;

	dstsize = 0;
	src_len = 0;
	while (s1[src_len] != '\0')
	{
		trim = ft_strchr(set, s1[src_len]);
		if (!trim)
			dstsize++;
		src_len++;
	}
	dst = (char *)malloc(sizeof(char) * (dstsize + 1));
	if (!dst)
		return (0);
	dst[dstsize] = '\0';
	while (--src_len > -1)
	{
		trim = ft_strchr(set, s1[src_len]);
		if (!trim)
			dst[--dstsize] = s1[src_len];
	}
	return (dst);
}
