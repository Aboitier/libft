/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:23:39 by aboitier          #+#    #+#             */
/*   Updated: 2019/01/17 00:05:22 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *format, ...)
{

	... means ellipse
	void va_start(va_list ap, last_arg) : fonction qui initialise ap et doit etre appelee en premier pour que va_arg et va_end puissent etre utilisees. 
				 ap is the object of va_list which will hold the information needed to retrieve the additional arguments with va_arg
				last_arg is the last known fixed argument being passed to the function
	type va_arg(va_list ap, type): retrieves the next argument in the parameter list of the function with type. does not determine wheter the retrieved argument is the last argument passed to the function. 
				ap: object of type va_list with information about the additional arguments and their retrieval state. Initialized with va_start
				type: this is a type name. this type name is used as the type of the expression, this macro expands to
	va_end(va_list ap) allows a function with variable arguments which used the va_start macro to return. If va_end is not called before returning from the function, the result is undefined. 
				ap: this is the va_list object previously initialized by va_start.

	what should my printf do?
		elle retourne le nombre de caracteres imprimees sans le dernier \0. write input like a printf would do. Using % intelligently which are located after the ','. 
		Les spécifications de conversion sont introduites par le caractère %, et se terminent par un indicateur de conversion. Entre eux peuvent se trouver (dans l'ordre), zéro ou plusieurs attributs, une valeur optionnelle de largeur minimal de champ, une valeur optionnelle de précision, et un éventuel modificateur de longueur.
		
		Caractère d'attribut
		Le caractère % peut être éventuellement suivi par un ou plusieurs attributs suivants :
#
		indique que la valeur doit être convertie en une autre forme. Pour la conversion o le premier caractère de la chaîne de sortie vaudra zéro (en ajoutant un préfixe 0 si ce n'est pas déjà un zéro). Pour les conversions x et X une valeur non nulle reçoit le préfixe « 0x » (ou « 0X » pour l'indicateur X). Pour les conversions a, A, e, E, f, F, g, et G le résultat contiendra toujours un point décimal même si aucun chiffre ne le suit (normalement, un point décimal n'est présent avec ces conversions que si des décimales le suivent). Pour les conversions g et G les zéros en tête ne sont pas éliminés, contrairement au comportement habituel. Pour les autres conversions, cet attribut n'a pas d'effet.
		0
		indique le remplissage avec des zéros. Pour les conversions d, i, o, u, x, X, a, A, e, E, f, F, g, et G, la valeur est complétée à gauche avec des zéros plutôt qu'avec des espaces. Si les attributs 0 et - apparaissent ensemble, l'attribut 0 est ignoré. Si une précision est fournie avec une conversion numérique (d, i, o, u, x, et X), l'attribut 0 est ignoré. Pour les autres conversions, le comportement est indéfini.
		-
		indique que la valeur doit être justifiée sur la limite gauche du champ (par défaut elle l'est à droite). Sauf pour la conversion n, les valeurs sont complétées à droite par des espaces, plutôt qu'à gauche par des zéros ou des blancs. Un attribut - surcharge un attribut 0 si les deux sont fournis.
		aq aq
		(une espace) indique qu'une espace doit être laissée avant un nombre positif (ou une chaîne vide) produit par une conversion signée
		+
		Un signe (+ ou -) doit toujours être imprimé avant un nombre produit par une conversion signée. Par défaut, un signe n'est utilisé que pour des valeurs négatives. Un attribut + surcharge un attribut « espace » si les deux sont fournis.


		% - attributs - taille/largeur de champ - precision - modificateur de longueur - indicateur de conversion
		%: %i, %d, %p, %s
		attributs: #, 0, -, espace, +
		taille champ: nombre optionnel ne commencant pas par 0
		precision: nombre minimum de chffres a faire apparairte lors des conversions diouxX, nombre de decimales pour aAeEfF, maximum de chiffres pour gG et max char a print depuis une chaine pour sS
		modificateur de longueur: hh, h, l, ll, L
