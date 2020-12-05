/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:22:29 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:38:11 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int antepenultimo;
	int penultimo;

	if (index >= 0)
	{
		if (index == 0)
		{
			return (0);
		}
		else if (index == 1)
		{
			return (1);
		}
		else
		{
			antepenultimo = ft_fibonacci(index - 2);
			penultimo = ft_fibonacci(index - 1);
			return (antepenultimo + penultimo);
		}
	}
	else
	{
		return (-1);
	}
}
