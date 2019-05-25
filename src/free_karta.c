/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_karta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:56:34 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/25 17:05:13 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_karta(t_map *karta)
{
	int i;

	i = karta->size - 1;
	if (karta)
	{
		while (i >= 0)
		{
			free(&(karta->karta[i]));
			i--;
		}
		free(&(karta->karta));
		free(&karta);
	}
}

void	print_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
	{
		ft_putstr(map->karta[i++]);
		ft_putchar('\n');
	}
}
