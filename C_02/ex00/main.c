/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:28:28 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:54:04 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[]	= "Hello";
	char dest[]	= "Basecamp";

	printf("%s\n", ft_strcpy(&dest[0], &src[0]));
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
	
	return (0);
}