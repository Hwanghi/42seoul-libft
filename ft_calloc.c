/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:59:26 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/15 17:28:12 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	j;
	char	*dst;

	dst	= (char *)malloc(sizeof(char) * (count * size));
	if (!dst)
		return (0);
	i = 0;
	while (i < count)
	{
		j = 0;
		while (j < size)
		{
			*(dst + i + j) = 0;
			j++;
		}
		i++;
	}
	return (dst);
}
