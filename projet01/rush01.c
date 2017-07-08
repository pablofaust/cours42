/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 15:55:01 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int n);

void	ft_ligne1(int n)
{
	int		a;

	a = 1;
	while (a <= n)
	{
		if (a == 1)
		{
			ft_putchar(47);
		}
		else if (a == n)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar(42);
		}
		a++;
	}
}

void	ft_ligne2(int n)
{
	int		a;

	a = 1;
	while (a <= n)
	{
		if (a == 1)
		{
			ft_putchar(92);
		}
		else if (a == n)
		{
			ft_putchar(47);
		}
		else
		{
			ft_putchar(42);
		}
		a++;
	}
}

void	ft_ligne_inter(int n)
{
	int		a;

	a = 1;
	while (a <= n)
	{
		if (a == 1)
		{
			ft_putchar(42);
		}
		else if (a == n)
		{
			ft_putchar(42);
		}
		else
		{
			ft_putchar(' ');
		}
		a++;
	}
}

int		ft_rush01(int x, int y)
{
	int		a;
	int		b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		if (b == 1)
		{
			ft_ligne1(x);
		}
		else if (b == y)
		{
			ft_ligne2(x);
		}
		else
		{
			ft_ligne_inter(x);
		}
		a = 1;
		b++;
		ft_putchar('\n');
	}
	return (0);
}
