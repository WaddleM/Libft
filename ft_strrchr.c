/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:53:27 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/12 15:11:36 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char *res;

	res = 0;
	if (str)
	{
		while (*str)
		{
			if (*str == c)
				res = (char*)str;
			str++;
		}
		if (*str == c)
			res = (char*)str;
	}
	return (res);
}
