/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:59:05 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/15 18:55:19 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	size_t	len;
	char	*dst;

	len = 0;
	while (s1[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len));
	if (!dst)
		return (0);
	while (*s1 != '\0')
		*dst++ = *s1++;
	*dst = '\0';
	dst -= len;
	return (dst);
}
