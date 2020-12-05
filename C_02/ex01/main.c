/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 00:45:33 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 01:56:01 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[]	= "Hello";
	char dest[]	= "Basecamp";

	printf("%s\n", ft_strncpy(dest, src, 2));
	printf("%s\n", strncpy(dest, src, 2));
	return (0);
}
