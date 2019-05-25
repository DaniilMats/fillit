/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:38:49 by edestiny          #+#    #+#             */
/*   Updated: 2019/04/17 12:16:14 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *buf;
	t_list *buf_next;

	if (!alst || !*alst || !del)
		return ;
	buf = *alst;
	while (buf)
	{
		buf_next = buf->next;
		del(buf->content, buf->content_size);
		free(buf);
		buf = buf_next;
	}
	*alst = NULL;
}
