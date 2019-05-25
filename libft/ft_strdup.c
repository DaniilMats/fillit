/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:33:46 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/22 11:34:17 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*str_c;

	len = ft_strlen(str);
	if (!(str_c = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str_c[i] = str[i];
		i++;
	}
	return (str_c);
}
