/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:29:18 by akaratas          #+#    #+#             */
/*   Updated: 2023/07/26 21:41:46 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < (n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if ((s1[i] < s2[i]))
		return (-1);
	else if ((s1[i] > s2[i]))
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			if (ft_strncmp(&str[j], to_find, ft_strlen(to_find)) == 0)
				return (&str[j]);
		}
		j++;
	}
	return (NULL);
}
