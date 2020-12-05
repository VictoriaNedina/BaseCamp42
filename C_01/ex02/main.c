/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 01:15:41 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/28 18:33:35 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int c = 2;
	int d = 10;
	
	a = &c;
	b = &d;
	printf("Endereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
	ft_swap(a, b); // troca de valor
	printf("\nEndereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
}
