/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:20:32 by iobba             #+#    #+#             */
/*   Updated: 2022/10/20 10:04:27 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*msrc;
	char			*mdest;
	size_t			i;

	msrc = (char *) src;
	mdest = (char *) dest;
	if (!mdest && !msrc)
		return (NULL);
	i = 0;
	while (i < n)
	{
		mdest[i] = msrc[i];
		i++;
	}
	return ((void *)dest);
}
