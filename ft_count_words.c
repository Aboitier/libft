/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:46:42 by aboitier          #+#    #+#             */
/*   Updated: 2019/02/28 21:56:34 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
			words++;
		while ((str[i] != '\n' && str[i] != '\t' && str[i] != ' ') && str[i])
			i++;
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
	}
	return (words);
}

