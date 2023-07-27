/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:36:03 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/27 18:44:01 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	bytes_compared;

	bytes_compared = 0;
	while (bytes_compared < n)
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		bytes_compared++;
		s1++;
		s2++;
	}
	return (0);
}
