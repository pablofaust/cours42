/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:30:05 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/17 19:58:16 by pfaust           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	j = 1;
	if (argc == 1)
		return (0);
	while (argv[j])
	{
		i = 1;
		while (argv[j + i])
		{
			if (ft_strcmp(argv[j], argv[j + i]) > 0)
			{
				str = argv[j];
				argv[j] = argv[j + i];
				argv[j + i] = str;
			}	
			i++;
		}
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
