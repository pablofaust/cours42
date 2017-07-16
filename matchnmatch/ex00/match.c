/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 08:34:37 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/16 21:48:56 by pfaust           ###   ########.fr       */
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

int		ft_etoile(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str == '*')
			i++;
		str++;
	}
	return (i);
}

int		match(char *s1, char *s2)
{
	//printf("len s1 : %d\nlen s2 : %d\n", ft_strlen(s1), ft_strlen(s2)); 
	if (*s2 == 0)
		return (0);
	if ((ft_strlen(s1) > ft_strlen(s2)) && ft_etoile(s2) < 1)
		return (0);
	if (*s1 == 0 && *s2 != '*')
		return (0);
	while (*s1 && *s2)
	{
		if (*s2 == '*' && *(s2 - 1) != ' ')
		{
			s2++;
			if (*s2 == 0)
				return (1);
			while (*s1 != *s2)
			{
				if (*s1 == 0)
					return (0);
				if (*s2 == '*')
					s2++;
				else
					s1++;
			}
		}
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (0);
	return (1);
}
