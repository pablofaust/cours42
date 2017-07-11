/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:13:48 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/10 16:04:34 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		negatif;

	i = 0;
	nb = 0;
	negatif = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '+') && nb == 0)
			nb = 0;
		else if (str[i] == '-')
			negatif = 1;
		else if (negatif == 0 && str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i] - 48);
		else if (negatif == 1 && str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) - (str[i] - 48);
		else
			return (nb);
		i++;
	}
	return (nb);
}
