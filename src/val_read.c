/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:58:23 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/27 13:20:27 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*val_read(int fd, int i)
{
	char		value;
	t_list		*list;
	char		buf[22];
	t_etris		*figue;
	int			ret[26];

	if (fd < 0)
		return (NULL);
	list = NULL;
	value = 'A';
	ft_memset((void*)buf, '\0', 22);
	while ((ret[i] = read(fd, buf, 21)) > 0)
	{
		if (!(figue = list_tetrim(buf, value++)) || ret[i] < 20)
			return (NULL);
		ft_lstadd(&list, ft_lstnew(figue, sizeof(t_etris)));
		ft_memset((void*)buf, '\0', 20);
		ft_memdel((void**)&figue);
		i++;
	}
	if (ret[i - 1] == 21 && ret[i] == 0)
		return (NULL);
	list_rev(&list);
	return (list);
}
