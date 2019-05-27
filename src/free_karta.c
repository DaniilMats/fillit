/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_karta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:56:34 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/27 13:58:25 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_list(t_list *list)
{
	t_list *buf;

	while (list)
	{
		buf = list->next;
		free_tetr((t_etris*)list->content);
		ft_memdel((void**)&list);
		list = buf;
	}
}

void	free_tetr(t_etris *figue)
{
	int i;

	i = 0;
	while (i < figue->height)
		ft_memdel((void**)(&(figue->pos[i++])));
	ft_memdel((void**)(&(figue->pos)));
	ft_memdel((void**)&figue);
}

void	free_karta(t_map *karta)
{
	int i;

	i = 0;
	while (i < karta->size)
	{
		ft_memdel((void**)(&(karta->karta[i])));
		i++;
	}
	ft_memdel((void**)(&(karta->karta)));
	ft_memdel((void**)&karta);
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
