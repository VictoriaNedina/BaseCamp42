/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:56:49 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:56:16 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str1[]	= "basecamp";
	char str2[]	= "BaseCamp";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_lowercase(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_lowercase(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_lowercase(str3));
	return (0);
}
