/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:16:26 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/19 10:00:55 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	start;
	char	**tab;

	if ((s == 0) || (c == 0))
		return (NULL);
	len = ft_count_words(s, c);
	if ((tab = ft_memalloc((sizeof(char *) * (len + 1)))) == NULL)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < len)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if ((tab[j] = ft_strsub(s, start, i++ - start)) == NULL)
			return (ft_delarray(tab));
	}
	tab[j] = NULL;
	return (tab);
}
