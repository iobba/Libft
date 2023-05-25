/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:11:31 by iobba             #+#    #+#             */
/*   Updated: 2022/10/12 09:46:09 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

static int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int		l;
	char	*str;

	l = ft_len(nb);
	str = (char *) malloc((l + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		str[0] = '-';
	str[l] = '\0';
	while (nb != 0)
	{
		l--;
		str[l] = ft_abs(nb % 10) + 48;
		nb = nb / 10;
	}
	return (str);
}
