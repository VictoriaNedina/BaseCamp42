/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:19:57 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 05:21:50 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return ('\0');
	}
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
#include <stdio.h>

int main()
{
    printf("%d", ft_recursive_factorial(6));
}
