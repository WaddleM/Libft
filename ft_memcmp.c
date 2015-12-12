/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 10:12:15 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/07 10:14:06 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*ptr;

	str = (unsigned char*)s1;
	ptr = (unsigned char*)s2;
	i = 0;
	while (str[i] == ptr[i] && i < n)
		i++;
	if (i == n)
		i -= 1;
	return (str[i] - ptr[i]);
}
