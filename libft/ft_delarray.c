/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 09:48:40 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/19 09:49:20 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_delarray(char **tab)
{
	if (tab)
	{
		while (*tab)
		{
			free(*tab);
			*tab = NULL;
			tab++;
		}
		free(tab);
		tab = NULL;
	}
	return (NULL);
}
