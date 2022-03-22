/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:09:38 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/22 20:12:12 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	n_len;

	if (!needle && !haystack)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + n_len <= len)
	{
		n = 0;
		while (needle[n] != '\0' && haystack[i + n] == needle[n])
			n++;
		if (needle[n] == '\0')
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
