/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:08:17 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/20 16:00:41 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	start;
	size_t	end;
	size_t	s_len;

	if (!s1 || !set)
		return (NULL);
	if (*set == '\0')
		return ((char *)s1);
	s_len = ft_strlen(s1);
	start = 0;
	end = s_len - 1;
	while (start < s_len && ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
	{
		trim_str = (char *)malloc(1);
		*trim_str = 0;
	}
	else
		trim_str = ft_substr(s1, start, end - start + 1);
	return (trim_str);
}
