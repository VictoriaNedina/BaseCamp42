/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 02:12:48 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/05 02:13:44 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int main() 
{
  	ft_print_numbers();
	write(1, "\n", 1);
  return 0;
}