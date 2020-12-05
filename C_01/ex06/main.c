/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 02:01:11 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/30 22:32:25 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str); 


int main(void)
{
	char *str;
	int tamanho;
	
	str = "Texto";
	
	tamanho = ft_strlen(str);
	printf("%d\n", tamanho);
}
