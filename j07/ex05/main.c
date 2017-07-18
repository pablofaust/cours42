/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:25:07 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 17:00:09 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main()
{
	char	*str;
	char 	**ptr;
	int		i;

	i = 0;
	str = "j'ai mal au crane sa mere";
	ptr = ft_split_whitespaces(str);
	ft_print_words_tables(ptr);
	return (0);
}
