/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 23:01:13 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/09 23:19:07 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(s1);
	while (i < n && s2[i])
	{
		s1[count] = s2[i];
		i++;
		count++;
	}
	s1[count] = '\0';
	return (s1);
}
