/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:57:50 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 23:57:55 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char s1[]="ABCE";
	char s2[]="ABCD";
	unsigned int n = 4;

	printf("Comp Strings:\n");
	printf("s1 => %s\n", s1);
	printf("s2 => %s\n", s2);
	printf("n => %d\n", n);
	printf("Resultado da comparação entre strings => %d\n", ft_strncmp(s1, s2, n));
	printf("Resultado da função importada entre strings => %d\n", strncmp(s1, s2, n));

	return (0);
}