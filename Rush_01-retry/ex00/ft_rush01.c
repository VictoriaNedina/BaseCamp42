/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:35:12 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/30 19:06:40 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	str_to_int(char str)
{
	return (int)str - 48;
}

int		get_number(int number)
{
    return number > 4 ? 1 : number;
}

int	get_correct_start_number(int number)
{
    return (number * -1) + 4;
}

void	print_number(int number, int print_space)
{
	char teste = number + '0';

    write(1, &teste, 1);
    if (print_space == 1)
    {
        write(1, " ", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
}

void print_row(int start, int columns_ammount)
{
    int current_column = 0;
    int last_number = get_correct_start_number(start);

    while (current_column != columns_ammount)
    {
        current_column++;
        last_number = get_number(last_number + 1);
        print_number(last_number, current_column != columns_ammount);
    }
}

void	rush01 (char *str)
{
    int	columns_ammount = 4;

    int	column[] = {
        str_to_int(str[16]),
        str_to_int(str[18]),
        str_to_int(str[20]),
        str_to_int(str[22])
    };

    int current_line = 0;
    while (current_line <= 3)
    {
        print_row(column[current_line], columns_ammount);
        current_line++;
    }
}
