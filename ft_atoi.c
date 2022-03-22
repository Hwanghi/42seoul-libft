/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:37:10 by hehwang           #+#    #+#             */
/*   Updated: 2022/03/22 21:08:36 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static long	calc_number(const char *str, size_t nbr_len, int sign)
{
	size_t	i;
	long	num;

	i = 0;
	if (nbr_len >= 18)
	{
		while (i < nbr_len)
		{
			if (sign == 1)
				if ("923372036854775807"[i] < str[i])
					return (-1);
			if (sign == -1)
				if ("923372036854775808"[i] < str[i])
					return (0);
			i++;
		}
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	nbr_len;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nbr_len = 0;
	while (str[nbr_len] >= '0' && str[nbr_len] <= '9')
		nbr_len++;
	return ((int)calc_number(str, nbr_len, sign));
}
