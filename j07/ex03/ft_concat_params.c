/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 14:11:25 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int		ft_len(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	argv++;
	while (*argv)
	{
		i = 0;
		while ((*argv)[i])
		{
			len++;
			i++;
		}
		len++;
		argv++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char			*tab;
	unsigned int	len;
	unsigned int	i;

	if (argc < 1)
		return (0);
	len = ft_len(argc, argv);
	tab = (char*)malloc(sizeof(*tab) * len);
	while (*argv)
	{
		i = 0;
		while ((*argv)[i])
		{
			*tab = (*argv)[i];
			i++;
			tab++;
		}
		*tab = '\n';
		argv++;
	}
	*tab = 0;
	return (tab);
}
