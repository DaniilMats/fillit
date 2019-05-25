/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:19:04 by edestiny          #+#    #+#             */
/*   Updated: 2019/05/25 17:30:00 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			valid_tetr(char *str)
{
	int			touch;
	int			i;
	int			c_hash;
	static int	m_of_tetr;

	c_hash = 0;
	i = -1;
	touch = 0;
	if (str[4] != '\n' || str[9] != '\n' || str[14] != '\n' ||
		str[19] != '\n' || str[0] == '\n' || str[20] != '\n')
		return (0);
	while (str[++i] != '\0')
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '#')
		{
			c_hash++;
			(str[i + 1] == '#') ? touch++ : 0;
			(str[i + 5] == '#') ? touch++ : 0;
			(str[i - 1] == '#') ? touch++ : 0;
			(str[i - 5] == '#') ? touch++ : 0;
		}
	}
	return (((touch == 6 || touch == 8) && c_hash == 4 && ++m_of_tetr <= 26));
}

void		min_max(t_point *min, t_point *max, char *str)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i / 5 < min->y)
				min->y = i / 5;
			if (i / 5 > max->y)
				max->y = i / 5;
			if (i % 5 < min->x)
				min->x = i % 5;
			if (i % 5 > max->x)
				max->x = i % 5;
		}
		i++;
	}
}

t_etris		*list_tetrim(char *str, char value)
{
	int		i;
	char	**arr;
	t_etris	*figue;
	t_point	*min;
	t_point	*max;

	min = create_point(3, 3);
	max = create_point(0, 0);
	figue = ft_memalloc(sizeof(t_etris));
	min_max(min, max, str);
	arr = ft_memalloc(sizeof(char*) * (max->y - min->y + 1));
	i = 0;
	while (i < (max->y - min->y + 1))
	{
		arr[i] = ft_strnew(max->x - min->x + 1);
		ft_strncpy(arr[i], str + (min->x + (i + min->y) * 5),
			max->x - min->x + 1);
		i++;
	}
	figue->height = max->y - min->y + 1;
	figue->weight = max->x - min->x + 1;
	figue->value = value;
	figue->pos = arr;
	return (figue);
}
