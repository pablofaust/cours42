/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 00:58:11 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/09 01:26:08 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b,int *div,int *mod)
{
	int		x;
	int		y;

	div = &x;
	mod = &y;
	*div = a / b;
	*mod = a & b;
	printf("%d", *div);
	printf("%d", *mod);
}
