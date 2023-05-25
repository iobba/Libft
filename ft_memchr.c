/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:00:57 by iobba             #+#    #+#             */
/*   Updated: 2022/10/15 05:15:56 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*mstr;
	unsigned char	x;
	size_t			i;

	mstr = (unsigned char *) str;
	x = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (mstr[i] == x)
			return ((void *)&mstr[i]);
		i++;
	}
	return (NULL);
}
