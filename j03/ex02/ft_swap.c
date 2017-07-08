/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 23:28:47 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/08 23:44:42 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;
	int		**ptra2;
	int		**ptrb2;

	a = 42;
	b = 47;
	ptra = &a;
	ptrb = &b;
	ptra2 = &ptra;
	ptrb2 = &ptrb;
	**ptrb2 = *ptra;
	**ptra2 = *ptrb;
	ft_putchar(a);
	ft_putchar(b);
	return(0);
}
