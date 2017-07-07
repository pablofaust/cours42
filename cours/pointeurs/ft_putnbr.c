/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:51:26 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/06 21:14:40 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_length(int n)
{
	int length;

	length = 0;
	while (n != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

void	ft_putnbr(int n)
{
	int exponent;
	int length;

	exponent = 1;
	length = ft_length(n) - 1;
	while (length > 0)
	{
		exponent = exponent * 10;
		length--;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (exponent >= 10)
	{
		ft_putchar(n / exponent + 48);
		n = n - (n / exponent * exponent);
		exponent = exponent / 10;
	}
	ft_putchar(n % 10 + 48);
}
