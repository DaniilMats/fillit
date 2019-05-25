/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:08:07 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/19 09:38:27 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t	i;

	if (!dest && !source)
		return (NULL);
	i = 0;
	if (source < dest)
		while (++i <= n)
			((unsigned char*)dest)[n - i] = ((unsigned char*)source)[n - i];
	else
		ft_memcpy(dest, source, n);
	return (dest);
}
