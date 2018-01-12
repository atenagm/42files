/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:25 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:14:56 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*pnt1;
	unsigned char	*pnt2;

	if (n == 0)
		return (0);
	pnt1 = (unsigned char *)s1;
	pnt2 = (unsigned char *)s2;
	while (*pnt1 && *pnt1 == *pnt2 && --n)
	{
		pnt1++;
		pnt2++;
	}
	return (*pnt1 - *pnt2);
}
