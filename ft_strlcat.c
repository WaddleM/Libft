/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 10:14:51 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/07 10:15:47 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	result;

	i = 0;
	while (i < size)
	{
		if (dst[i] == '\0')
			break ;
		i++;
	}
	result = i + ft_strlen(src);
	n = size - i - 1;
	if (i != size)
	{
		j = 0;
		while (src[j] && j < n)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (result);
}
