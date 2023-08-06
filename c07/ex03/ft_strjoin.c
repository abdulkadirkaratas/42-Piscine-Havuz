/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:26:52 by akaratas          #+#    #+#             */
/*   Updated: 2023/08/02 16:32:27 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	matrix_len;

	i = 0;
	matrix_len = 0;
	while (i < size)
	{
		matrix_len = matrix_len + ft_strlen(strs[i]);
		i++;
	}
	matrix_len = matrix_len + (ft_strlen(sep) * (size - 1));
	return (matrix_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strfull;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	strfull = (char *)malloc((total_len(size, strs, sep) + 1) * sizeof(char));
	if (strfull == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(strfull, strs[i]);
		if (i < (size - 1))
			ft_strcat(strfull, sep);
		i++;
	}
	return (strfull);
}
