/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:15:35 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/16 13:15:31 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copy;
	int		len;
	int		i;

	if (!(s))
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		len--;
	}
	if (len <= 0)
		len = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s += i;
	i = 0;
	while (i < len)
		copy[i++] = *s++;
	copy[i] = '\0';
	return (copy);
}
