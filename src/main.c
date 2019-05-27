/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:52:17 by edestiny          #+#    #+#             */
/*   Updated: 2019/05/27 14:02:03 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_map	*map;
	t_list	*list;
	int		i;

	if (argc == 2)
	{
		i = 0;
		if (!(list = val_read(open(argv[1], O_RDONLY), i)))
		{
			ft_putstr("error\n");
			return (1);
		}
		map = solve(list);
		free_list(list);
		print_map(map);
		free_karta(map);
	}
	else
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	return (0);
}
