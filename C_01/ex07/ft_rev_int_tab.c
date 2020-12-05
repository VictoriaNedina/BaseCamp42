/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:47:46 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/30 23:02:08 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int a;
	int b;

	i = 0;
	while (i != size / 2)
	{
		a = tab[i];
		b = tab[(size - 1) - i];
		temp = a;
		a = b;
		b = temp;
		tab[i] = a;
		tab[(size - 1) - i] = b;
		i++;
	}
}
