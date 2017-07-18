/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 18:52:38 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		ft_len(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	len;

	argc = argc + 0;
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

char				*ft_concat_params(int argc, char **argv)
{
	char			*tab;
	unsigned int	i;
	int				j;
	int				k;

	if (!(tab = (char*)malloc(sizeof(*tab) * ft_len(argc, argv))))
		return (NULL);
	j = 1;
	k = 0;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			tab[k] = argv[j][i];
			i++;
			k++;
		}
		tab[k] = '\n';
		k++;
		j++;
	}
	k--;
	tab[k] = 0;
	return (tab);
}
