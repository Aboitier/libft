/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:55:27 by aboitier          #+#    #+#             */
/*   Updated: 2019/02/28 20:25:53 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_rm_word(char **s, char *word, int ws)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	if (*s)
	{
		while ((*s)[i])
		{
			j = 0;
			if ((*s)[i] == word[j])
				while ((*s)[i] == word[j] && j <= ws && (*s)[i++] && word[j++])
					;
			if (j == ws)
				break ;
			i++;
		}
		if (!(new = (char *)malloc(sizeof(char) *
						((int)ft_strlen(*s) - i + 1))))
			return (0);
		new = ft_strcpy(new, *s + i);
		free(*s);
		return (new);
	}
	return (NULL);
}
