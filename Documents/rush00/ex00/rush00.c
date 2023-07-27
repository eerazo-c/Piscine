/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroca-ab <aroca-ab@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:09:10 by aroca-ab          #+#    #+#             */
/*   Updated: 2023/07/09 11:51:37 by aroca-ab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	rows(int x)
{
	int	hyphen;

	hyphen = 1;
	ft_putchar('o');
	while (hyphen <= x - 2)
	{
		ft_putchar('-');
		hyphen++;
	}
	ft_putchar('o');
}

void	columns(int x, int y)
{
	int	pipe;
	int	space;

	pipe = 1;
	ft_putchar('\n');
	while (pipe <= y - 2)
	{
		space = 1;
		ft_putchar('|');
		pipe++;
		while (space <= x - 2)
		{
			ft_putchar(' ');
			space++;
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	one_column(int x, int y)
{
	int	pipe;
	int	space;

	pipe = 1;
	ft_putchar('o');
	ft_putchar('\n');
	while (pipe <= y - 2)
	{
		ft_putchar('|');
		pipe++;
		space = 1;
		while (space <= x - 2)
		{
			ft_putchar(' ');
			space++;
		}
		ft_putchar('\n');
	}
	ft_putchar('o');
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x == 1 && y >= 2)
	{
		one_column(x, y);
		ft_putchar('\n');
	}
	if (x >= 2 && y == 1)
	{
		rows(x);
		ft_putchar('\n');
	}
	if (x >= 2 && y >= 2)
	{
		rows(x);
		columns(x, y);
		rows(x);
		ft_putchar('\n');
	}
}
