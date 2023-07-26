/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:08:45 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/18 16:36:59 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	end;
	int	temp;

	count = 0;
	end = size -1;
	while (count < end)
	{
		temp = tab[count];
		tab[count] = tab [end];
		tab[end] = temp;
		count++;
		end--;
	}
}
