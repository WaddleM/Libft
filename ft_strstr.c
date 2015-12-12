/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudelafo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:54:30 by gudelafo          #+#    #+#             */
/*   Updated: 2015/12/12 11:37:26 by gudelafo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *s)
{
	int i;
	int j;

	i = 0;
	if (!s[0])
		return ((char*)str);
	while (str[i])
	{
		j = 0;
		while (s[j] == str[i + j])
		{
			if (s[j + 1] == '\0')
				return ((char*)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
