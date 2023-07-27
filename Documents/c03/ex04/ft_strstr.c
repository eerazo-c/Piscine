/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:16:51 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/27 18:59:23 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	compare_string(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare_string(str, to_find) == 1)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

int	compare_string(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*to_find != *str)
		{
			return (0);
		}
		to_find++;
		str++;
	}
	return (*to_find == '\0');
}

/*
 int	main()
{
	char str[] = "this is my evaluation time5656";
	char to_find[] = "";
	char *result = ft_strstr(str, to_find);
	printf("%s\n", result);
}
*/
