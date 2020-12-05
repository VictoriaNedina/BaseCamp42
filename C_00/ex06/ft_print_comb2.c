/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 05:52:41 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/27 03:55:27 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char first, char second, char third, char fourth)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, &fourth, 1);
	first == '9' && second == '8' ?
	write(1, "", 0) : write(1, ", ", 2);
}

void	ft_print_comb2_2(char first, char second, char third, char fourth)
{
	while (fourth <= '9')
	{
		if ((10 * first + second) < (10 * third + fourth))
		{
			ft_putchars(first, second, third, fourth);
		}
		fourth++;
	}
}

void	ft_print_comb2(void)
{
	char first;
	char second;
	char third;
	char fourth;

	first = '0';
	while (first <= '9')
	{
		second = '0';
		while (second <= '9')
		{
			third = '0';
			while (third <= '9')
			{
				fourth = '0';
				ft_print_comb2_2(first, second, third, fourth);
				third++;
			}
			second++;
		}
		first++;
	}
}
