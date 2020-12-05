/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:57:26 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 23:57:28 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src);
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[] = "Hello";
	char src[] = "Doria";

	printf("dest => %s\n", dest);
	printf("src => %s\n", src);
	printf("Resultado funcao => %s\n", ft_strcat(dest, src));
	//printf("Resultado correto => %s\n", strcat(dest, src)); concatena 2 vezes
	
	return (0);
}
