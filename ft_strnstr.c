/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:54:30 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/12 15:10:58 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *s, int n)
{
	int i;
	int j;

	i = 0;
	if (!s[0])
		return ((char*)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (s[j] == str[i + j] && j + i < n)
		{
			if (s[j + 1] == '\0')
				return ((char*)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
