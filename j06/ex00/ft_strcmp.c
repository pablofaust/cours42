/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:13:48 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/12 18:30:52 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		a;
	int		b;

	a = ft_atoi(s1);
	b = ft_atoi(s2);
	if (a > b)
		return (1);
	if (a < b)
		return (- 1);
	else
		return (0);
}

int		main()
{
	char	s1 [] = "394";
	char	s2 [] = "394";
	int		a;

	a = ft_strcmp(s1, s2);
	printf("%d\n", a);
	return (0);
}
