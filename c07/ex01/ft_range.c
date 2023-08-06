/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:22:51 by akaratas          #+#    #+#             */
/*   Updated: 2023/08/02 16:24:30 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num_arr;
	int	i;

	if (min >= max)
		return (NULL);
	num_arr = (int *)malloc(((max - min)) * sizeof(int));
	if (num_arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		num_arr[i++] = min++;
	}
	return (num_arr);
}
