/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:09:17 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/17 09:39:39 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)dst;
	if (n == 0)
		return (dst);
	while (n)
	{
		*str = (unsigned char)c;
		if (n)
			str++;
		n--;
	}
	return (dst);
}
