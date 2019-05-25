/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:49:30 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/14 16:11:06 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;

	if (*little != '\0')
	{
		little_len = ft_strlen(little);
		while (*big != '\0' && len >= little_len)
		{
			if (ft_strncmp(big, little, little_len) == 0)
				return ((char *)big);
			big++;
			len--;
		}
		return (0);
	}
	return ((char *)big);
}
