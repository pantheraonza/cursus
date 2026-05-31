/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 19:30:10 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 19:30:12 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);
        return (0);

/*
NAME
isalpha - character classification functions

SYNOPSIS
#include <ctype.h>
int isalpha(int c);

DESCRIPTION
These  functions  check  whether c, which must have the value of an unsigned
char or EOF, falls into a certain character class according to the specified
locale.

isalpha() checks for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) || islower(c)).  In some locales, there may
be  additional  characters for which isalpha() is true—letters which are
neither uppercase nor lowercase.

RETURN VALUES
The values returned are nonzero if the character c falls into the tested
class, and zero if not.

ERRORS

NOTES



*/
