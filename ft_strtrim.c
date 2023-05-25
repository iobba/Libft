/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:58:03 by iobba             #+#    #+#             */
/*   Updated: 2022/10/20 16:09:02 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	search(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			start;
	size_t			end;
	char			*str;
	size_t			size;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && search(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && search(s1[end - 1], set))
		end--;
	if (end < start)
		size = 1;
	size = end - start + 1;
	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (end > start)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
