/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:38:13 by iobba             #+#    #+#             */
/*   Updated: 2022/10/27 17:08:59 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char			*d;
	size_t			i;

	d = (char *) str;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
}
