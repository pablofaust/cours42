/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:30:05 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/14 15:11:23 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = *argv;
	ptr2 = *argv + 1;



	while (*argv)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
