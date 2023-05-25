/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:00:20 by iobba             #+#    #+#             */
/*   Updated: 2022/10/17 21:27:13 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!str)
		return (NULL);
	if (len > (ft_strlen(str) - start) && ft_strlen(str) > start)
		return (ft_strdup(&str[start]));
	else if (len <= ft_strlen(str) - start && ft_strlen(str) > start)
	{
		sub = (char *)malloc((len + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		i = 0;
		while (i < len)
		{
			sub[i] = str[start + i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
	else
		return (ft_strdup(&str[ft_strlen(str)]));
	return (sub);
}
