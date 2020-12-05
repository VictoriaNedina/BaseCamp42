/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:22:23 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:38:36 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int babylonian_number;
	int i;

	babylonian_number = nb;
	i = 1;
	while (babylonian_number > i && babylonian_number > 0)
	{
		babylonian_number = (babylonian_number + i) / 2;
		i = nb / babylonian_number;
	}
	if (babylonian_number * babylonian_number == nb)
		return (babylonian_number);
	else
		return (0);
}
