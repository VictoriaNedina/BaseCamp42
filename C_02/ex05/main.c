/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:57:25 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:56:28 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str1[]	= "BASECAMP";
	char str2[]	= "BaseCamp";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_uppercase(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_uppercase(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_uppercase(str3));
	return (0);
}
