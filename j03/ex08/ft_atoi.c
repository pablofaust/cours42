/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:06:03 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/10 22:58:05 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		nb;
	int		negatif;

	nb = 0;
	negatif = 1;
	while (*str == ' ' || *str == '0' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		negatif = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			nb = (nb * 10) + negatif * (*str - 48);
		else
			return (nb);
		str++;
	}
	return (nb);
}
