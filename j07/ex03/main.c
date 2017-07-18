/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:11:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 11:16:33 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	ft_concat_params(argc, argv);
	return (0);
}
