/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:20:29 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:37:18 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int pow;

	pow = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			pow = pow * nb;
			power--;
		}
	}
	else
	{
		return (0);
	}
	return (pow);
}
