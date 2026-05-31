/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:44:52 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:44:53 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	printf("factorial de 5: %d\n", ft_recursive_factorial(5));
	printf("factorial de 0: %d\n", ft_recursive_factorial(0));
	printf("factorial de -1: %d\n", ft_recursive_factorial(-1));
	return (0);
} */
