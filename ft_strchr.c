/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:57:09 by iobba             #+#    #+#             */
/*   Updated: 2022/10/27 18:03:34 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *str, int c)
{
	char	k;
	int		i;

	k = (char) c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == k)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == k)
		return ((char *)&str[i]);
	return (0);
}
