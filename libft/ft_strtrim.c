/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:48:08 by savincen          #+#    #+#             */
/*   Updated: 2016/02/03 16:28:17 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;

	i = -1;
	n = ft_strlen(s);
	while (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\n')
		n--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		n--;
	if (n <= 0)
		n = 0;
	s = s + i;
	i = -1;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	while (++i < n)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
