/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 01:52:00 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/30 14:30:40 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 50;
	int b = 5;
	int divisao;
	int resto;

	int *div = &divisao;
	int *mod = &resto;
	
	ft_div_mod(a, b, *div, *mod);

	printf("Divisão = %d\n", *div);
	printf("Resto = %d\n", *mod);	
}