/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:21:15 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:37:40 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (ft_recursive_power(nb, power - 1) * nb);
		}
	}
	else
	{
		return (0);
	}
}
