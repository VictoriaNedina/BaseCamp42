/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 01:28:00 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/28 18:36:32 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int	main(void)
{
	int *nbr;
	int valor;

	nbr = &valor;
	ft_ft(nbr);

	printf("Endereço do ponteiro nbr = %p\n", nbr); 
	printf("Valor declarado = %d\n", *nbr);
}
