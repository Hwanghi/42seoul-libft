/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:32:22 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/11 16:28:20 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_c;

	s_c = s;
	while (n--)
	{
		if (*s_c == (unsigned char)c)
			return (s_c);
		s_c++;
	}
	return (0);
}
