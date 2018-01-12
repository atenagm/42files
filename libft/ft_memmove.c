/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:23 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:10:02 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 > str2)
		while (len--)
			str1[len] = str2[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
