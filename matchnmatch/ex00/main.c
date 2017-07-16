/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 08:37:21 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/16 20:34:21 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		match(char *s1, char *s2);

int		main()
{
	printf("\nEXPECretTED 0\n");
	printf("%d\n", match("est", "t") );
	printf("%d\n", match("test", "**testt") );
	printf("%d\n", match("test", "ts**") );
	printf("%d\n", match("test", "**te") );
	printf("%d\n", match("test", "t**s") );
	printf("%d\n", match("test", "") );
	printf("%d\n", match("", "test") );
	printf("%d\n", match("abc", "abd") );
	printf("%d\n", match("test", "es*") );
	printf("%d\n", match("test", "t") );
	printf("%d\n", match("salut ca va", "salutc*va") );
	printf("%d\n", match("kayak", "k*aak") );
	printf("%d\n", match("salut les amis", "salut les*mis ") );
	printf("%d\n", match("caca boudin", "*i") );
	printf("%d\n", match("*etoile*", "*etoile") );
	printf("%d\n", match("*etole*", "*etoile*") );
	printf("%d\n", match("*etoile*", "etoile*") );
	printf("%d\n", match("*", "*l") );
	printf("%d\n", match("ppa*", "ppa") );
	printf("%d\n", match("bonjour la famille ca va ? moi oui ça va bien merci", "b*l*r*c") );
	printf("%d\n", match("mot mot mot", "mot * mot mot") );
	printf("%d\n", match("ca va ? bien merci", "*ca v* *a ?* bien m*erci**") );
	printf("%d\n", match("vvvvvv", "*vv*vvvvv") );
	printf("\nEXPECTED 1\n");
	printf("%d\n", match("mot mot mot", "mot* mot mot") );
	printf("%d\n", match("test", "**t") );
	printf("%d\n", match("test", "**t**") );
	printf("%d\n", match("test", "**test**") );
	printf("%d\n", match("test", "t**t**") );
	printf("%d\n", match("test", "***") );
	printf("%d\n", match("test", "t**e**") );
	printf("%d\n", match("", "") );
	printf("%d\n", match("abc", "abc") );
	printf("%d\n", match("test", "*t") );
	printf("%d\n", match("test", "t*") );
	printf("%d\n", match("salut ca va", "salut c*va") );
	printf("%d\n", match("plop", "*") );
	printf("%d\n", match("", "*") );
	printf("%d\n", match("*", "*") );
	printf("%d\n", match("plop*p", "*") );
	printf("%d\n", match("test", "****") );
	printf("%d\n", match("salut les amis", "salut les*mis") );
	printf("%d\n", match("caca boudin", "*n") );
	printf("%d\n", match("cacan boudin", "*n") );
	printf("%d\n", match("*etoile*", "*etoile*") );
	printf("%d\n", match("*etoile*", "*etoil*") );
	printf("%d\n", match("*etoile*", "**etoile*") );
	printf("%d\n", match("lo*l", "*l") );
	printf("%d\n", match("lo*l", "l*") );
	printf("%d\n", match("*", "***") );
	printf("%d\n", match("***", "*") );
	printf("%d\n", match("bonjour la famille ça va ? moi oui ça va bien merci", "b*l*r*") );
	printf("%d\n", match("ca va ? bien merci", "ca* bien merci") );
	printf("%d\n", match("ca va ? bien merci", "*ca v** ?* bien m*erci**") );
	printf("%d\n", match("vvvvvv", "*vv*vvvv") );
	printf("%d\n", match("** salut*jevais bien**et toi ?", "*salut*jevais*bien*i ?") );
	printf("%d\n", match("**   ere salut*jevais bien*et toi ?", "*salut*jevais*bien*i ?") );
	return 0;
}
