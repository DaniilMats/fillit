/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mswarthy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:58:23 by mswarthy          #+#    #+#             */
/*   Updated: 2019/05/25 17:21:23 by mswarthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*val_read(int fd)
{
	char		value;
	t_list		*list;
	char		buf[22];
	t_etris		*figue;

	if (fd < 0)
		return (NULL);
	list = NULL;
	value = 'A';
	ft_memset((void*)buf, '\0', 22);
	while ((read(fd, buf, 21)) > 0)
	{
		if (!(figue = list_tetrim(buf, value++)))
			return (NULL);
		ft_lstadd(&list, ft_lstnew(figue, sizeof(t_etris)));
	}
	list_rev(&list);
	return (list);
}
