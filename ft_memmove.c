/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:04:30 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/17 12:54:55 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		tmp = dst;
		s = src;
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dst;
		tmp += len;
		s = src;
		s += len;
		while (len--)
			*--tmp = *--s;
	}
	return (dst);
}
