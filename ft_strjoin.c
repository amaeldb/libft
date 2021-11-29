/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:29:18 by ade-beta          #+#    #+#             */
/*   Updated: 2021/11/29 12:29:18 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;
	int		i;

	i = -1;
	ret = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (NULL);
	while (s1[++i])
		ret[i] = (char)s1[i];
	i = -1;
	while (s2[++i])
		ret[ft_strlen(s1) + i] = (char)s2[i];
	ret[i + ft_strlen(s1)] = '\0';
	return (ret);
}
