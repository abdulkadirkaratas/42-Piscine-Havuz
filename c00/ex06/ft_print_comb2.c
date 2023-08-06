/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:18:38 by akaratas          #+#    #+#             */
/*   Updated: 2023/07/18 17:06:03 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	second_number(char a1, char b1, char a2, char b2)
{
	a2 = a1;
	if (b1 == '9')
	{
		b2 = '0';
		a2++;
	}
	else
	{
		b2 = b1 + 1;
	}
	while (a2 <= '9')
	{
		while (b2 <= '9')
		{
			write(1, &a1, 1);
			write(1, &b1, 1);
			write(1, " ", 1);
			write(1, &a2, 1);
			write(1, &b2, 1);
			write(1, ", ", 2);
			b2++;
		}
		b2 = '0';
		a2++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	b1;
	char	a2;
	char	b2;

	a1 = '0';
	a2 = '0';
	b2 = '0';
	while (a1 <= '9')
	{
		b1 = '0';
		while (b1 <= '9')
		{
			if (a1 == '9' && b1 == '8')
			{
				write(1, "98 99", 5);
				break ;
			}
			else
				second_number(a1, b1, a2, b2);
			b1++;
		}
		a1++;
	}
}
