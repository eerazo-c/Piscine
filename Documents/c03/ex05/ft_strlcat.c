/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:11:40 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/07/27 19:42:44 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	str_len(char *str);
unsigned int	ft_copy(char *dest, char *src, unsigned int n);

void	ft_copy2(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

unsigned int	ft_copy(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;

	dest_len = 0;
	src_len = 0;
	total_len = 0;
	if (size > dest_len)
	{
		dest_len = str_len(dest);
		size = size - dest_len;
		if (src_len >= size)
		{
			src_len = size -1;
		}
		ft_copy2(dest, src, src_len);
		dest[src_len] = '\0';
	}
	else
	{
		total_len = src_len + size;
	}
	return (total_len);
}

unsigned int	str_len(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str--;
	}
	return (length);
}

/*
int main()
{
 char dest[10] = "hello";
 char src[] = "elizaworld49";
 unsigned int size = 1;
 int result = ft_strlcat(dest, src, size);
 for (int i = 0; i < 10; i++)
 {
		if (dest[i] == '\0');
		{
			printf("/0");
		}
		else
		{
		printf("%c", dest[i];
		}
	}
	print("\n");
	print("%d\n", result);
	return;
}
*/
