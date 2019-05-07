/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:35:03 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/19 22:19:50 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count(int n, size_t *dec)
{
	size_t			count;
	unsigned int	abs;

	count = 1;
	if (n < 0)
	{
		count++;
		abs = -n;
	}
	else
		abs = n;
	while (abs > 9)
	{
		abs = abs / 10;
		count++;
		*dec *= 10;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char			*ascii;
	size_t			i;
	size_t			dec;
	unsigned int	abs;

	dec = 1;
	i = 0;
	if (!(ascii = (char *)malloc(sizeof(char) * ft_count(n, &dec) + 1)))
		return (0);
	if (n < 0)
	{
		ascii[i++] = '-';
		abs = -n;
	}
	else
		abs = n;
	while (dec)
	{
		ascii[i++] = abs / dec % 10 + 48;
		dec /= 10;
	}
	ascii[i] = '\0';
	return (ascii);
}
