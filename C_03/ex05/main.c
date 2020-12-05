/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:00:03 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 00:03:43 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{
	char dest[] = "Hello";
	char src[] = "Doria";
	unsigned int nb = 11;
	
	printf("dest => %s\n", dest);
	printf("src => %s\n", src);
	printf("Resultado funcao => %d\n", ft_strlcat(dest, src, nb));
	printf("Resultado correto => %zu\n", strlcat(dest, src, nb));
	printf("Valor do dest => %s\n", dest);
	
	return (0);
}
