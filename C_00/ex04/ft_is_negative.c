/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:37:19 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/27 15:33:25 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char signal;

	if (n >= 0)
	{
		signal = 'P';
	}
	else
	{
		signal = 'N';
	}
	write(1, &signal, 1);
}
