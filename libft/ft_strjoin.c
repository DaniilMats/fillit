/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:14:29 by edestiny          #+#    #+#             */
/*   Updated: 2019/05/06 12:32:22 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	char	*copy;

	if (!(s1 && s2))
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	if (!(copy = (char*)malloc(sizeof(char) * length + 1)))
		return (NULL);
	ft_strcpy(copy, s1);
	ft_strcat(copy, s2);
	return (copy);
}
