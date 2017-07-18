/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:12:34 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 16:35:52 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int		ft_nb_mots(char *str)
{
	int		i;
	int		nb;

	if (*str == 0)
		return (0);
	nb = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == 32 || str[i] == 13 || str[i] == 9) && str[i])
			i++;
		while ((str[i] != 32 && str[i] != 13 && str[i] != 9) && str[i])
			i++;
		nb++;
	}
	if (str[i - 1] == 32 || str[i - 1] == 13 || str[i - 1] == 9)
		nb--;
	return (nb);
}

char	*ft_mot(int start, int end, char *str, char *mot)
{
	int		i;

	if (!(mot = (char*)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (start < end)
	{;
		mot[i] = str[start];
		start++;
		i++;
	}
	mot[i] = 0;
	return (mot); 
}

char	**ft_split_whitespaces(char *str)
{
	char 	**split;
	char	*tab;
	int		mots;
	int		start;
	int		end;
	char	*mot;
	int		j;

	mots = ft_nb_mots(str);
	end = 0;
	start = 0;
	j = 0;
	while (str[end])
	{
		while ((str[end] == 32 || str[end] == 13 || str[end] == 9) && str[end])
			end++;
		start = end;
		while ((str[end] != 32 && str[end] != 13 && str[end] != 9) && str[end])
			end++;
		mot = ft_mot(start, end, str, mot);
		if (!(split = (char**)malloc(sizeof(char**) * (mots + 1))))
			return (NULL);
		split[j] = mot;
		//printf("%s\n", split[j]);
		j++;
	}
	//printf("%s\n", split[j]);
	//split[j] = NULL;
	return (split);
}
