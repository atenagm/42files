/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:22 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:09:22 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pnt;
	unsigned char	*tmp;

	pnt = (unsigned char *)dst;
	tmp = (unsigned char *)src;
	while (n--)
	{
		*pnt++ = *tmp;
		if (*tmp++ == (unsigned char)c)
			return (pnt);
	}
	return (NULL);
}
