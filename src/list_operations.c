/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:12:14 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/25 17:12:55 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point		*create_point(int x, int y)
{
	t_point *size;

	if (!(size = ft_memalloc(sizeof(t_point))))
		return (0);
	size->x = x;
	size->y = y;
	return (size);
}

int			list_length(t_list *list)
{
	int i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void		list_rev(t_list **list)
{
	t_list	*next;
	t_list	*curent;
	t_list	*prev;

	prev = NULL;
	curent = *list;
	while (curent != NULL)
	{
		next = curent->next;
		curent->next = prev;
		prev = curent;
		curent = next;
	}
	*list = prev;
}

int			size_of_map(t_list *list)
{
	int size;
	int n;

	size = 0;
	n = list_length(list) * 4;
	while (size * size < n)
		size++;
	return (size);
}

t_map		*new_map(int size)
{
	t_map	*map;
	int		i;
	int		j;

	map = (t_map*)ft_memalloc(sizeof(t_map));
	map->karta = (char**)ft_memalloc(sizeof(char*) * size);
	map->size = size;
	i = 0;
	while (i < size)
	{
		j = 0;
		map->karta[i] = ft_strnew(size);
		while (j < size)
		{
			map->karta[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}
