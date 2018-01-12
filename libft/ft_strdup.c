/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:24 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:13:41 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	else
		ft_strcpy(str, (char *)s1);
	return (str);
}
