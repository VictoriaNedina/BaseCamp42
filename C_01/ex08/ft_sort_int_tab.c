/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:47:42 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/01 15:29:04 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = {5, -2, 18, 15, 14, 27, -12, 35 , 0 , 0, 10};
    

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