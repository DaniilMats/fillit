/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:52:17 by edestiny          #+#    #+#             */
/*   Updated: 2019/05/25 18:45:16 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_map	*map;
	t_list	*list;

	if (argc == 2)
	{
		if (!(list = val_read(open(argv[1], O_RDONLY))))
		{
			ft_putstr("error\n");
			return (0);
		}
		map = solve(list);
		//ft_memdel((void**)&list);   list free
		print_map(map);
		//free_karta(map);    map free
	}
	else
		ft_putstr("Error\n");
	return (0);
}
