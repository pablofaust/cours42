/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 02:39:37 by pfaust           ###   ########.fr       */
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
	int nbr_col;
	int nbr_li;

	a = 42;
	nbr_col = ft_nbr_col(x);
	nbr_li = ft_nbr_li(y);

	while (nbr_li >= 0)
	{
		while (nbr_col >= 0)
		{
			ft_putchar(a);
			nbr_col--;
		}
		ft_putchar('\n');
		nbr_li --;
		nbr_col = ft_nbr_col(x);
	}
	return (0);
}

int 	main()
{
	ft_rush01(5, 5);
	return(0);
}
