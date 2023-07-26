/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:50:41 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/20 14:44:03 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;
	int		number;

	letra = 'a';
	number = 0;
	while (number < 26)
	{
		write (1, &letra, 1);
		letra++;
		number++;
	}
}
