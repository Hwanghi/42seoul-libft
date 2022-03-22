/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:08:17 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/22 16:25:58 by hehwang          ###   ########.fr       */
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
	if (*s1 == '\0' || *set == '\0')
		return (ft_strdup(s1));
	s_len = ft_strlen(s1);
	end = s_len;
	while (end > 0 && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	start = 0;
	while (start < end && ft_strchr(set, s1[start]) != NULL)
		start++;
	trim_str = ft_substr(s1, start, end - start);
	return (trim_str);
}
