/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:26:42 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/27 10:08:23 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	x;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(str);
	while (++i < --len)
	{
		x = str[i];
		str[i] = str[len];
		str[len] = x;
	}
	return (str);
}
