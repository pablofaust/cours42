/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:12:34 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 22:14:37 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	while (*tab)
	{
		i = 0;
		while ((*tab)[i])
		{
			ft_putchar((*tab)[i]);
			i++;
		}
		ft_putchar('\n');
		tab++;
	}
}
