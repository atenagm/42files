/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:24 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:13:04 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*pnt;
	char	*src;

	pnt = s1;
	src = (char *)s2;
	while (*pnt)
		pnt++;
	while (*src)
		*pnt++ = *src++;
	*pnt = '\0';
	return (s1);
}
