/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:31:14 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/12 15:23:54 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *ptr)
{
	int i;
	int dix;
	int res;

	i = 0;
	dix = 1;
	res = 0;
	while (ptr[i] == ' ' || ptr[i] == '\n' || ptr[i] == '\t' || ptr[i] == '\r' \
			|| ptr[i] == '\v' || ptr[i] == '\f')
		i++;
	if (ptr[i] == '+' || ptr[i] == '-')
		i++;
	while (ft_isdigit(ptr[i]) == 1)
		i++;
	i--;
	while (i >= 0 && ft_isdigit(ptr[i]) == 1)
	{
		res += (ptr[i] - 48) * dix;
		dix *= 10;
		i--;
	}
	if (ptr[i] == '-')
		return (-res);
	else
		return (res);
}
