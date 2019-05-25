/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:47:57 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/22 18:15:37 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char i;

	i = (char)c;
	while (*str != '\0' && *str != i)
		str++;
	if (*str == i)
		return ((char *)str);
	else
		return (0);
}
