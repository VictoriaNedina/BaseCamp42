/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 01:58:22 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/01 04:03:46 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
	//declara ponteiro
	int *a;
	int *b;
	
	//atribui valor a variáveis
	int c = 20;
	int d = 4;

	//variavel a contem &valor_declarado
	a = &c;
	b = &d;
	
	ft_ultimate_div_mod(a, b);
	printf("Divisão em a = %d\n", *a);
	printf("Resto em b = %d\n", *b);

}
