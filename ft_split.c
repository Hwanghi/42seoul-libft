/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:04:32 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/17 17:12:51 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **arr_str)
{
	size_t	i;

	i = 0;
	while (arr_str[i])
	{
		free(arr_str[i]);
		i++;
	}
	free(arr_str);
}

static size_t	count_strings(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
			if (*(s + 1) == c || *(s + 1) == '\0')
				count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	size_t	word_count;
	size_t	str_len;

	if (!s)
		return (0);
	word_count = count_strings(s, c);
	arr_str = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr_str)
		return (0);
	while (*s != '\0')
	{
		str_len = 0;
		while (s[str_len] != c || s[str_len] != '\0')
			str_len++;
		if (str_len > 0)
		{
			ft_strlcpy(*arr_str, s, str_len + 1);
			if (!(*arr_str))
			{
				free_all(arr_str);
				return (0);
			}
			s += str_len;
			arr_str++;
		}
		while (*s == c)
			s++;
	}
	*arr_str = 0;
	arr_str -= word_count;
	return (arr_str);
}
