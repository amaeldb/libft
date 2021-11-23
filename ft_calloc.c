/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:49:27 by ade-beta          #+#    #+#             */
/*   Updated: 2021/11/23 17:24:06 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t 	i;
	void	*ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(size * nmemb);
	i = -1;
	while (++i < nmemb)
		ft_bzero(ret, (size * nmemb));
	return (ret);
}
