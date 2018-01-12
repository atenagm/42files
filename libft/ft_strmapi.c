/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:25 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:14:44 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*pnt;
	char		*ret;
	unsigned	i;

	if (s != NULL)
	{
		pnt = ft_strdup(s);
		if (pnt == NULL)
			return (NULL);
		ret = pnt;
		i = 0;
		while (*pnt)
		{
			*pnt = f(i, *pnt);
			pnt++;
			i++;
		}
		return (ret);
	}
	return (NULL);
}
