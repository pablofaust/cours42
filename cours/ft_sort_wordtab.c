/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 09:56:53 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/21 13:46:04 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	while (tab[j])
	{
		i = j + 1;
		while (tab[i])
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
			{
				str = tab[j];
				tab[j] = tab[i];
				tab[i] = str;
			}
			i++;
		}
		j++;
	}
}
