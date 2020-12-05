/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 05:31:30 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 05:40:29 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
#include <stdio.h>

int main()
{
    printf("%d", ft_iterative_factorial(6));
}

