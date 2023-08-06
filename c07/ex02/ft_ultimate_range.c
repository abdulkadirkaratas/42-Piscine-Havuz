/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:25:05 by akaratas          #+#    #+#             */
/*   Updated: 2023/08/02 16:47:01 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*num_arr;
	int	i;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	size = (max - min);
	num_arr = (int *)malloc(size * sizeof(int));
	if (num_arr == NULL)
	{
		range[0] = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		num_arr[i++] = min++;
	}
	range[0] = num_arr;
	return (size);
}
