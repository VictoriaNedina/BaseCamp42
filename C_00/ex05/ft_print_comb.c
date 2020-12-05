/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 05:11:10 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/26 06:58:00 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char first_number;
	char second_number;
	char third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				write(1, &first_number, 1);
				write(1, &second_number, 1);
				write(1, &third_number, 1);
				(first_number == '7') ? write(1, "", 0) : write(1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
