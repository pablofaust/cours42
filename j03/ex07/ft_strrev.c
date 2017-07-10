/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:26:42 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/09 17:03:56 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_longueur_str(char *str)
{
	int		longueur_str;

	longueur_str = 0;
	while (str[longueur_str] != 0)
	{
		longueur_str++;
	}
	return(longueur_str);
}

int		main()
{
	char	ptr[] = "pablos";
	int		longueur;
	char	*ptr2;
	char	*ptr3;
	char	x;

	longueur = ft_longueur_str(ptr);
	ptr2 = ptr;
	ptr3 = &ptr[longueur - 1];
	ft_putchar(*ptr2);
	ft_putchar(*ptr3);
	x = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = x;
	ft_putchar(*ptr2);
	ft_putchar(*ptr3);
	return (0);
}
