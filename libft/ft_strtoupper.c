/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:26 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:15:51 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	char	*s;

	if (!str)
		return (NULL);
	s = str;
	while (*str)
	{
		*str = ft_toupper(*str);
		++str;
	}
	return (s);
}
