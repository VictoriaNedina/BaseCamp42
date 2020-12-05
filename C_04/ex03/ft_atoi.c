/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:49:44 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/03 06:25:54 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_number;
int g_signal;
int g_negative;

void	ft_initvar(void)
{
	g_number = 0;
	g_signal = 1;
	g_negative = 0;
}

int		ft_atoi(char *str)
{
	ft_initvar();
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		while (*str == '-')
		{
			g_negative++;
			str++;
		}
		str++;
	}
	if (g_negative % 2 != 0)
	{
		g_signal = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		g_number = (g_number * 10) + (*str - '0');
		str++;
	}
	return (g_number * g_signal);
}

