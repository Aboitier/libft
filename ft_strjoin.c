/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:49:40 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/20 23:13:27 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_str;
	size_t		len_s1s2;

	if (!s1 || !s2)
		return (0);
	len_s1s2 = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_str = (char *)malloc(sizeof(char) * (len_s1s2 + 1))))
		return (0);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return ((char *)new_str);
}
