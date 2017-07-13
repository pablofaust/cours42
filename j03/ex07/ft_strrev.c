/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:26:42 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/13 16:55:05 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_size(char *str)
{
	int		size;

	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	x;
	int		size;

	i = 0;
	size = ft_size(str);
	while (i < size - 1)
	{
		x = str[i];
		str[i] = str[i + 1];
		str[i + 1] = x;
		i++;
	}
	return (str);
}

int		main()
{
	char	str[] = "abcdefg";

	printf("%s\n", ft_strrev(str));
	return (0);
}
