/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:25 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:15:19 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	*des;
	char	*src;
	char	*tmpdes;
	char	*tmpsrc;

	des = (char *)big;
	src = (char *)little;
	tmpdes = des;
	tmpsrc = src;
	while (*des && *src && des != ((char *)big + n))
	{
		if (*des++ == *src)
		{
			if (tmpsrc == src++)
				tmpdes = des - 1;
		}
		else
		{
			des = ++tmpdes;
			src = tmpsrc;
		}
	}
	if (!*src)
		return (tmpdes);
	return (NULL);
}
