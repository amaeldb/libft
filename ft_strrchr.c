/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:26:35 by ade-beta          #+#    #+#             */
/*   Updated: 2021/11/23 15:26:37 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;
	
	ret = (char *)s;
	i = ft_strlen(ret);
	if (i == 0 && !c)
		return (&ret[0]);
	if (!c)
		return (&ret[i]);
	if (c && !i)
		return (NULL);
	while (ret[--i])
		if (ret[i] == (char)c)
			return (&ret[i]);
	return (NULL);
}

