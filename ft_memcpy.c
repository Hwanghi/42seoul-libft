/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:50:38 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/22 19:49:44 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*s;

	if (!dst && !src && n)
		return (NULL);
	tmp = dst;
	s = src;
	while (n--)
		*tmp++ = *s++;
	return (dst);
}
