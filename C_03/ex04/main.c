/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:59:17 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 00:01:40 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find);

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hello";
	char to_find[] = "el";

	printf("str => %s\n", str);
	printf("to_find => %s\n", to_find);
	printf("Resultado funcao => %s\n", ft_strstr(str, to_find));
	printf("Resultado correto => %s\n", strstr(str, to_find));
	
	return (0);
}
