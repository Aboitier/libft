/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:01:20 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/20 15:47:00 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	size_t	s_size;
	char	*new_str;

	s_size = ft_strlen(s);
	if (s)
	{
		if (s_size > len)
		{
			if (!(new_str = (char *)malloc(sizeof(char) * (s_size + 1))))
				return (0);
			ft_strncpy(new_str, s, s_size);
		}
		else
		{
			if (!(new_str = (char *)malloc(sizeof(char) * (len + 1))))
				return (0);
			ft_strncpy(new_str, s, len);
		}
		new_str[len] = '\0';
		return (new_str);
	}
	return (0);
}
