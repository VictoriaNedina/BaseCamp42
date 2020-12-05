/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 02:16:28 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/28 02:16:31 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = {5, -2, 18, 15, 14, 27, -12, 35 , 0 , 10, 10};
    

	printf("Endereço da Tabela Original: %p\n", tab);
	printf("Tabela Original: \n");
	for(int j = 0; j < 11; j++) {
        printf("%d, ", tab[j]);
    }
    printf("\n");

	ft_sort_int_tab(tab, 11);

	printf("\nEndereço da Tabela Modificada: %p\n", tab);
	printf("Tabela Modificada: \n");
	for(int i = 0; i < 11; i++) {
    	printf("%d, ", tab[i]);
	}
}