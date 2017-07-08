/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 03:49:34 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_nbr_col(int n)
{
	int nbr_col;

	nbr_col = 0;
	while (n != 0)
	{
		nbr_col++;
		n = n - 1;
	}
	return (nbr_col);
}

int		ft_nbr_li(int n)
{
	int nbr_li;

	nbr_li = 0;
	while (n != 0)
	{
		nbr_li++;
		n = n - 1;
	}
	return (nbr_li);
}

int		ft_rush01(int x, int y)
{
	int a;
	int b;
	int c;
	int nbr_col;
	int nbr_li;

	a = 42;
	b = 47;
	c = 92;
	nbr_col = ft_nbr_col(x);
	nbr_li = ft_nbr_li(y);
	
	if (nbr_li >= 0)
	{
		ft_putchar(47);
		nbr_col = nbr_col - 2;
		while (nbr_col >= 0)
		{
			ft_putchar(a);
			nbr_col--;
		}
		ft_putchar(92);
		ft_putchar('\n');
		nbr_li--;
	}
	nbr_li = ft_nbr_li(y) - 1;
	nbr_col = ft_nbr_col(x);

	while (nbr_col >= 0)
	{
		ft_putchar(42);
		nbr_col = nbr_col - 2;
		while (nbr_col >= 0)
		{
			ft_putchar(' ');
			nbr_col--;
		}
		ft_putchar(42);
	}

	return (0);
}

int 	main()
{
	ft_rush01(12, 5);
	return(0);
}
