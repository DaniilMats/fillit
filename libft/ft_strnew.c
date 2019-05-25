/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:54:15 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/22 18:05:30 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (size == ((size_t)-1))
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
