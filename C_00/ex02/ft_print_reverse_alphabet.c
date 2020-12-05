/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:29:02 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/26 06:41:36 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char reverse_alpha;

	reverse_alpha = 'z';
	while (reverse_alpha >= 'a')
	{
		write(1, &reverse_alpha, 1);
		reverse_alpha = reverse_alpha - 1;
	}
}
