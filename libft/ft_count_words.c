/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:46:48 by savincen          #+#    #+#             */
/*   Updated: 2016/02/03 14:01:14 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		indice;

	i = 0;
	indice = 0;
	while (*s != '\0')
	{
		if (indice == 1 && *s == c)
			indice = 0;
		if (indice == 0 && *s != c)
		{
			i++;
			indice = 1;
		}
		s++;
	}
	return (i);
}
