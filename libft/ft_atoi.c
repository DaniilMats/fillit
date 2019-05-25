/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:49:54 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/16 13:17:04 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	int					sign;
	long int			nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		if ((nbr < 0) || (nbr != nbr * 10 / 10))
			return ((sign == 1) ? -1 : 0);
		i++;
	}
	return (nbr * sign);
}
