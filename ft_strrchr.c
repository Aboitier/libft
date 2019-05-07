/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:43:12 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/20 16:30:47 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *s_ptr;

	s_ptr = ft_strchr(s, '\0');
	while (s_ptr >= s)
	{
		if (*s_ptr == (unsigned char)c)
			return ((char *)s_ptr);
		s_ptr--;
	}
	return (0);
}
