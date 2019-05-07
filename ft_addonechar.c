/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addonechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:18:00 by aboitier          #+#    #+#             */
/*   Updated: 2019/02/22 05:54:08 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_addonechar(char **str, char c)
{
	char	*new;
	size_t	size;

	size = 0;
	if (*str)
	{
		size = ft_strlen(*str);
		if (!(new = (char*)malloc(sizeof(char) * size + 2)))
			return (0);
		new = ft_strcpy(new, *str);
		new[size] = c;
		new[size + 1] = '\0';
		free(*str);
		return (new);
	}
	else
	{
		new = (char*)ft_memalloc(2);
		new[size] = c;
		new[size + 1] = '\0';
		return (new);
	}
	return (NULL);
}
