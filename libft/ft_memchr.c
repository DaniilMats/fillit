/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:18:12 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/15 23:03:47 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t				i;
	unsigned char		*result;

	i = 0;
	result = (unsigned char *)arr;
	while (i < n)
	{
		if (result[i] == (unsigned char)c)
			return (result + i);
		i++;
	}
	return (NULL);
}
