/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:22:36 by ade-beta          #+#    #+#             */
/*   Updated: 2021/11/24 12:57:05 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cspa(char *s, char c)
{
	int	count;
	int	prev;
	int	i;

	i = -1;
	prev = 0;
	count = 0;
	while (s[++i])
	{
		if ((s[i] == c && prev) || (!s[i + 1] && s[i] != c))
		{
			count++;
			prev = 0;
		}
		else if (s[i] != c)
			prev = 1;
	}
	return (count);
}

char	**malsub(char **ret, char *s, char c)

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**ret;
	int		i;

	ret = malloc(sizeof(char *) * cspa(s, c) + 1);
	if (!ret)
		return (NULL);
	
