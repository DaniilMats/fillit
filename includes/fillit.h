/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:21:55 by edestiny          #+#    #+#             */
/*   Updated: 2019/05/25 17:16:11 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_etris
{
	char		**pos;
	int			height;
	int			weight;
	char		value;
}				t_etris;

typedef struct	s_map
{
	int			size;
	char		**karta;
}				t_map;

int				valid_tetr(char *str);
t_etris			*list_tetrim(char *str, char value);
t_point			*create_point(int x, int y);
int				list_length(t_list *list);
int				size_of_map(t_list *list);
t_map			*new_map(int size);
void			list_rev(t_list **list);
t_list			*val_read(int fd);
t_map			*solve(t_list *list);
void			free_karta(t_map *karta);
void			print_map(t_map *map);

#endif
