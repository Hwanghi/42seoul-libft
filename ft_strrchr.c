/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:44:20 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/14 13:05:44 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	r;

	while (s[r] != '\0')
		r++;
	if ((char)c == '\0')
		return (&s[r]);
	while (r--)
	{
		if (s[r] == (char)c)
			return (&s[r]);
	}
	return (0);
}
