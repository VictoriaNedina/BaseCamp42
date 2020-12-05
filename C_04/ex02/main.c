/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:23:11 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 00:23:12 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(0);
	ft_putnbr(4);
	ft_putnbr(-32000);
	ft_putnbr(32000);
}