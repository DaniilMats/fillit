/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:33:12 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/14 16:06:00 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t				i;
	unsigned char		*s1;
	unsigned char		*s2;

	i = 0;
	s1 = (unsigned char*)buf1;
	s2 = (unsigned char*)buf2;
	if (count == 0)
		return (0);
	while (i < count)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
