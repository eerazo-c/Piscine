/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:49:59 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/27 19:50:18 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	printable;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		printable = *str;
		if (!(printable >= 32 && printable <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
