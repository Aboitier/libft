/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 03:31:37 by aboitier          #+#    #+#             */
/*   Updated: 2019/06/25 03:31:54 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char 	*ft_fillchar(long width, long len, char c)
{
	char	*new;
	long	i;
	
//	if (!size)
		
	i = -1;
	if (!(new = (char *)malloc(sizeof(char) * (width + 1))))
		return (NULL);
	while (++i < width - len)
		new[i] = c;
	new[i] = '\0';
	return (new);
}
