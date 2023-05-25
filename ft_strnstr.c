/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:06:32 by iobba             #+#    #+#             */
/*   Updated: 2022/10/20 11:05:42 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*needle))
		return ((char *)str);
	if (!str && n == 0)
		return (NULL);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
