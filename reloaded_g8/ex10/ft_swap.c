/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:22:08 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:22:10 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("Before exchange positions: a=%d b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("After exchange positions: a=%d b=%d\n", a, b);
	return (0);
} */
