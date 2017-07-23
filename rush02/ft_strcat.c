/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 20:23:36 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/14 10:12:52 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		longueur_dest;
	int		longueur_src;

	i = 0;
	longueur_dest = 0;
	longueur_src = 0;
	while (dest[longueur_dest] != 0)
		longueur_dest++;
	while (src[longueur_src] != 0)
		longueur_src++;
	while (i <= longueur_src)
	{
		dest[i + longueur_dest] = src[i];
		i++;
	}
	dest[i + longueur_dest + 1] = 0;
	return (dest);
}
