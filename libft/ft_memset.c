/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:23 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:10:08 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pnt;
	unsigned char	*end;

	pnt = (unsigned char *)b;
	end = pnt + len;
	while (pnt != end)
		*pnt++ = (unsigned char)c;
	return (b);
}
