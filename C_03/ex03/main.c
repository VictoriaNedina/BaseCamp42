/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:58:12 by vnedina-          #+#    #+#             */
/*   Updated: 2020/12/04 23:58:56 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	char dest[] = "Hello";
	char src[] = "Doria";
	unsigned int nb = 4;

	printf("dest => %s\n", dest);
	printf("src => %s\n", src);
	printf("nb => %d\n", nb);
	printf("Resultado funcao => %s\n", ft_strncat(dest, src, nb));
	// printf("Resultado correto => %s\n", strncat(dest, src, nb));
	
	return (0);
}