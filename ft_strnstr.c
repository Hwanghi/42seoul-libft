/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:09:38 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/17 16:16:37 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	needle_len;

	if (!needle && !haystack)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i + needle_len < len)
	{
		n = 0;
		while (haystack[i + n] == needle[n])
		{
			if (!haystack[i + n] || !needle[n])
				break ;
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
