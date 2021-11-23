/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:43:52 by ade-beta          #+#    #+#             */
/*   Updated: 2021/11/23 13:49:14 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*strd;
	char	*strs;

	i = 0;
	strd = (char *)dest;
	strs = (char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			strd[n - 1] = strs[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			strd[i] = strs[i];
			i++;
		}
	}
	return ((void *)strd);
}
