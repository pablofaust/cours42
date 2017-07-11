/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:26:42 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/10 16:02:06 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	*ptr2;
	char	*ptr3;
	char	x;
	int		counter;

	ptr2 = str;
	i = 0;
	while (str[i] != 0)
	{
		i++;
		i = i;
		ptr3 = str + i - 1;
		counter = i / 2;
	}
	while (counter >= 0)
	{
		x = *ptr2;
		*ptr2 = *ptr3;
		*ptr3 = x;
		counter--;
		ptr2 = ptr2 + 1;
		ptr3 = ptr3 - 1;
	}
	return (str);
}
