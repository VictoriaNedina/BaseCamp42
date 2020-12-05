/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:57:46 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 00:58:00 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str1[]	= "kgjbwed~jh43593 4857^&*^$$^@$";
	char str2[]	= "\n;;lfkj;\0";
	char str3[]	= "";

	printf("Str1 deve ser 1 = %d\n", ft_str_is_printable(str1));
	printf("Str2 deve ser 0 = %d\n", ft_str_is_printable(str2));
	printf("Str3 deve ser 1 = %d\n", ft_str_is_printable(str3));
	return (0);
}
