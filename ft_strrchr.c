/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:44:20 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/16 15:42:25 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	size_t	r;

	r = 0;
	while (s[r] != '\0')
		r++;
	if ((char)c == '\0')
	{
		sp = (char *)&s[r];
		return (sp);
	}
	while (r--)
	{
		if (s[r] == (char)c)
		{
			sp = (char *)&s[r];
			return (sp);
		}
	}
	return (0);
}
