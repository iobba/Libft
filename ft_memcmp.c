/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:34:07 by iobba             #+#    #+#             */
/*   Updated: 2022/10/15 05:21:30 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ms1;
	unsigned char	*ms2;
	size_t			i;

	ms1 = (unsigned char *) s1;
	ms2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ms1[i] != ms2[i])
			return (ms1[i] - ms2[i]);
		i++;
	}
	return (0);
}
