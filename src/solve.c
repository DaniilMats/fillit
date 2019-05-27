/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 17:58:06 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/27 13:51:35 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		set_figue(t_map *map, t_point *point, t_etris *figue, char c)
{
	int i;
	int j;

	i = 0;
	while (i < figue->weight)
	{
		j = 0;
		while (j < figue->height)
		{
			if (figue->pos[j][i] == '#')
				map->karta[point->y + j][point->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void**)&point);
}

int			place(t_map *map, t_etris *figue, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < figue->weight)
	{
		j = 0;
		while (j < figue->height)
		{
			if (figue->pos[j][i] == '#' && map->karta[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	set_figue(map, create_point(x, y), figue, figue->value);
	return (1);
}

int			solved(t_map *map, t_list *list)
{
	int		x;
	int		y;
	t_etris	*figue;

	if (!list)
		return (1);
	y = 0;
	figue = (t_etris*)(list->content);
	while (y < (map->size - figue->height + 1))
	{
		x = 0;
		while (x < (map->size - figue->weight + 1))
		{
			if (place(map, figue, x, y))
			{
				if (solved(map, list->next))
					return (1);
				else
					set_figue(map, create_point(x, y), figue, '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}

t_map		*solve(t_list *list)
{
	int		size;
	t_map	*map;

	size = size_of_map(list);
	map = new_map(size);
	while (!solved(map, list))
	{
		size++;
		free_karta(map);
		map = new_map(size);
	}
	return (map);
}
