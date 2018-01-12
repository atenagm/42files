/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:25 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:15:14 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(size + 1);
	if (str != NULL)
	{
		i = 0;
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
