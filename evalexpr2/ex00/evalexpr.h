/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:04:58 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/23 21:08:52 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

typedef struct	s_noeud
{
	int		data;
	t_node	*gauche;
	t_node	*right;
}				t_noeud;

#endif
