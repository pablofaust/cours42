/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:20:28 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/10 10:51:50 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fn(int i)
{
	if (i < 5)
	{
		i++;
		write(1, "D", 1);
		fn(i);
		write(1, "F", 1);
		return(0);
	}
	else
	{
		return(0);
	}
}

int		main()
{
	fn(0);
	return (0);
}
