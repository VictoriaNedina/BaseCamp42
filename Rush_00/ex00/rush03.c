/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 22:16:32 by avalerio          #+#    #+#             */
/*   Updated: 2020/11/22 00:22:18 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_last_lines(int a)
{
	int i;
	i = 0;
	
	while (i < a)
	{
		if (i == 0 && a != 1)
		{
			ft_putchar('A');
		}
		else if (a == 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else if (i < a - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		i++;
	}
}

void	middle_lines(int b)
{
	int i;

	i = 0;
	while (i < b)
	{
		if (i == 0 && b != 1)
		{
			ft_putchar('B');
		}
		else if (b == 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (i < b - 1)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (j == 0 || j == y - 1)
		{
			first_last_lines(x);
		}
		else
		{
			middle_lines(x);
		}
		j++;
	}
}
