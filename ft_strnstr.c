/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:31:12 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/19 13:30:38 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*ndl)
		return ((char*)hs);
	while (hs[i] && i < len)
	{
		j = 0;
		while (hs[i + j] == ndl[j] && ndl[j] && i + j < len)
			j++;
		if (!ndl[j])
			return ((char*)&hs[i]);
		i++;
	}
	return (NULL);
}
