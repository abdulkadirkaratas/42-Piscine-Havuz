/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:07:30 by akaratas          #+#    #+#             */
/*   Updated: 2023/07/22 19:27:46 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_min_index(int *tab, int size, int i)
{
	int	min;
	int	min_index;
	int	j;

	min = tab[i];
	min_index = i;
	j = i;
	while (j < size)
	{
		if (tab[j] < min)
		{
			min = tab[j];
			min_index = j;
		}
		j++;
	}
	return (min_index);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	min_index;
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		min_index = find_min_index(tab, size, i);
		temp = tab[i];
		tab[i] = tab[min_index];
		tab[min_index] = temp;
		i++;
	}
}
