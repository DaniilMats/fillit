/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:48:40 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/14 16:11:11 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	size_t len;

	if (*str2 != '\0')
	{
		len = ft_strlen(str2);
		while (ft_strncmp(str1, str2, len) != 0)
		{
			if (*str1 == '\0')
				return (0);
			str1++;
		}
	}
	return ((char *)str1);
}
