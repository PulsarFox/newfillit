/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strssplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:43:48 by savincen          #+#    #+#             */
/*   Updated: 2016/02/03 14:06:08 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;
	int		mots;

	i = 0;
	mots = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(*tab) * (mots + 1));
	if (tab == NULL)
		return (NULL);
	while (mots--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		s = s + ft_wordlen(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
