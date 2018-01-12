/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:25 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:15:07 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*pnt1;
	char	*pnt2;

	if (s1 != NULL && s2 != NULL)
	{
		pnt1 = (char *)s1;
		pnt2 = (char *)s2;
		while (*pnt1 && *pnt1 == *pnt2 && n)
		{
			pnt1++;
			pnt2++;
			n--;
		}
		if (n == 0 || (*pnt1 == '\0' && *pnt2 == '\0'))
			return (1);
	}
	return (0);
}
