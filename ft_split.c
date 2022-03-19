/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:04:32 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/19 17:49:38 by hehwang          ###   ########.fr       */
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

static char	**set_arr(char **arr_str, char const *s, char c, size_t word_count)
{
	size_t	str_len;

	while (*s != '\0')
	{
		while (*s == c)
			s++;
		str_len = 0;
		while (s[str_len] != c && s[str_len] != '\0')
			str_len++;
		if (str_len > 0)
		{
			*arr_str = (char *)malloc(sizeof(char) * (str_len + 1));
			if (!(*arr_str))
			{
				free_all(arr_str);
				return (NULL);
			}
			ft_strlcpy(*arr_str, s, str_len + 1);
			s += str_len;
			arr_str++;
		}
	}
	*arr_str = NULL;
	arr_str -= word_count;
	return (arr_str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_strings(s, c);
	arr_str = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr_str)
		return (NULL);
	arr_str = set_arr(arr_str, s, c, word_count);
	return (arr_str);
}
