/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:09:38 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/14 13:35:39 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		n = 0;
		while (haystack[i + n] == needle[n])
		{
			if (!haystack[i + n] || !needle[n])
				break ;
			n++;
		}
		if (needle[n] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (0);
}
