/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 05:18:51 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n);

int		ft_rush01(int x, int y)
{
	int a = 1;
	int b = 1;

	while (b <= y)
	{
		if (b == 1)
		{
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
					ft_putchar(42);
				}
				a++;
			}
		}

		else if (b == y)
		{
			while (a <= x)
			{
				if (a == 1)
				{
					ft_putchar(92);
				}		

				else if (a == x)
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

		else		
		{
			while (a <= x)
			{
				if (a == 1)
				{
					ft_putchar(42);
				}

				else if (a == x)
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
		a = 1;
		b++;
		ft_putchar('\n');
	}
	return (0);
}

int 	main()
{
	ft_rush01(10, 10);
	return(0);
}
