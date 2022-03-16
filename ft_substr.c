/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:42:34 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/15 21:51:52 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return ((void *)0);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return ((void *)0);
	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		substr[0] = '\0';
		return (substr);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
