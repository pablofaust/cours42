/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:22:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 00:29:59 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);

void	ft_putnbr(int ptr);

int		main()
{
	int		tab [10];

	tab[0] = 42;
	ft_putnbr(tab[0]);
	return (0);
}
