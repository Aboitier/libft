/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 20:42:45 by aboitier          #+#    #+#             */
/*   Updated: 2019/07/30 18:46:50 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_numbers(char *str, int nb_numbers)
{
	int numbers;
	int i;

	numbers = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i] && numbers < nb_numbers)
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] == '-')
			i++;
		if (ft_isdigit(str[i]) > 0)
			numbers++;
		while (str[i] && ft_isalnum(str[i]) > 0)
			i++;
	}
	return (i);
}
