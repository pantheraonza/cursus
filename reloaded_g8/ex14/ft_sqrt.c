/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:45:59 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:46:00 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		i = i + 1;
	}
	if (i * i == nb)
		return (i);
	return (0);
}

/* int	main(void)
{
	printf("sqrt de 25: %d\n", ft_sqrt(25));
	printf("sqrt de 3: %d\n", ft_sqrt(3));
	printf("sqrt de 0: %d\n", ft_sqrt(0));
	return (0);
} */
