/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:26:43 by iobba             #+#    #+#             */
/*   Updated: 2022/10/17 18:58:31 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t			k;
	char			*ptr;

	k = ft_strlen(s1);
	ptr = (char *) malloc(k * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		ptr[k] = s1[k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
