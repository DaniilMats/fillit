/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:48:20 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/14 16:11:07 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *ch;

	ch = 0;
	while (*str != '\0')
	{
		if (*str == c)
			ch = (char*)str;
		str++;
	}
	if (*str == c)
		ch = (char*)str;
	return (ch);
}
