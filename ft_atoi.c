/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:42:26 by iobba             #+#    #+#             */
/*   Updated: 2022/10/27 13:47:45 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	f_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *s)
{
	int					i;
	unsigned long long	result;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		sign = f_sign(s[i]);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - 48;
		if (result > 9223372036854775807 && sign == 1)
			return (-1);
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (((int)result) * sign);
}
