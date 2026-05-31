/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:31:48 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:31:50 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/* int	main(void)
{
	printf("5!: %d\n", ft_iterative_factorial(5));
	printf("0!: %d\n", ft_iterative_factorial(0));
	printf("-1!: %d\n", ft_iterative_factorial(-1));
	return (0);
} */
