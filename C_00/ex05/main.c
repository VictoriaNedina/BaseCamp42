/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 02:13:01 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 02:14:12 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
