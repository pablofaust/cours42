/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:30:05 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/17 15:31:03 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	if (argc == 1)
		return (0);
	argv++;
	while (*argv)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
