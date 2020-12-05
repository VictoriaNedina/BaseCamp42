/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:46:12 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:55:45 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str1[]	= "Hello";
	char str2[]	= "B4secamp!";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_alpha(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_alpha(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_alpha(str3));

	return (0);
}
