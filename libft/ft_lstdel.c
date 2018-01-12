/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:21 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:08:46 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*pnt;
	t_list	*tmp;

	pnt = *alst;
	while (pnt)
	{
		tmp = pnt->next;
		del(pnt->content, pnt->content_size);
		free(pnt);
		pnt = tmp;
	}
	*alst = NULL;
}
