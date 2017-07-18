/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:25:07 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 16:35:40 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	**ft_split_whitespaces(char *str);

int		main()
{
	char	*str;
	char 	**ptr;
	int		i;

	i = 0;
	str = "j'ai mal au crane sa mere";
	ptr = ft_split_whitespaces(str);
	while (*ptr)
	{
		printf("%s\n", *ptr);
		ptr++;
	}
	return (0);
}
