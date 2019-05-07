/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 23:22:22 by aboitier          #+#    #+#             */
/*   Updated: 2018/09/03 09:51:20 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int count;
	int i;
	int tmp;

	i = 0;
	count = 0;
	while (str[count] != '\0')
		count++;
	if (str)
	{
		count = count - 1;
		while (i < count)
		{
			tmp = str[i];
			str[i] = str[count];
			str[count] = tmp;
			i++;
			count--;
		}
	}
	return (str);
}
