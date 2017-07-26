/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:26:42 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/26 22:05:45 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	*ptr1;
	char	*ptr2;
	char	x;

	ptr1 = str;
	ptr2 = ptr1 + ft_strlen(str) - 1;
	while (ptr2 > ptr1)
	{
		x = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = x;
		ptr1++;
		ptr2--;
	}
	return (str);
}

int		main()
{
	char	str[] = "pablo";
	char 	*strrev;

	strrev = ft_strrev(str);
	printf("%s\n", str);
	printf("%s\n", strrev);
	return (0);
}
