/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:23:06 by aboitier          #+#    #+#             */
/*   Updated: 2018/11/20 23:16:07 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	if (s)
	{
		j = ft_strlen(s) - 1;
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
			i++;
		if (!s[i])
			return (ft_strdup(""));
		while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j])
			j--;
		return (ft_strsub(s, i, (j - i + 1)));
	}
	return (NULL);
}
