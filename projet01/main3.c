/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 04:22:35 by pfaust           ###   ########.fr       */
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
	int a = 1;

	while (a <= x)
	{
		if(a == 1)
		{
			ft_putchar(47);
		}

		else if (a == x)
		{
			ft_putchar(92);
		}

		else
		{
			ft_putchar('*');
		}
		a++;
	}
	return (0);
}

int 	main()
{
	ft_rush01(5, 5);
	return(0);
}
