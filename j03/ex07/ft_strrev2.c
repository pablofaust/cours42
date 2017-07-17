/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:46:20 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/15 22:01:04 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strrev(char *str)
{
	int		cache;
	char	*ptr1;
	char	*ptr2;

	while (*str)
	{
		ptr1 = str;
		ptr2 = str + 1;
		cache = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = cache;
		ptr1++;
		ptr2++;
	}
	return (str);
}

int		main ()
{
	char	*str;

	str = "pablo";
	printf("%s\n", ft_strrev(str));
	return (0);
}
