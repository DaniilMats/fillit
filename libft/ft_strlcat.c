/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:47:42 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/17 12:16:02 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t dest;

	dest = ft_strlen(dst);
	if (n <= dest)
		return (n + ft_strlen(src));
	i = 0;
	while (i < n - dest - 1 && src[i] != '\0')
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + ft_strlen(src));
}
