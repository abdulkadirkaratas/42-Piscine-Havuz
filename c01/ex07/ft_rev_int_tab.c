/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:21:13 by akaratas          #+#    #+#             */
/*   Updated: 2023/07/22 17:21:13 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[(size - 1) - index];
		tab[(size - 1) - index] = temp;
		index++;
	}
}
