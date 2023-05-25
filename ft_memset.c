/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:27:54 by iobba             #+#    #+#             */
/*   Updated: 2022/10/27 17:03:15 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;
	unsigned char	x;

	d = (unsigned char *) str;
	i = 0;
	x = (unsigned char) c;
	while (i < n)
	{
		d[i] = x;
		i++;
	}
	return (str);
}
