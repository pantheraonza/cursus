/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 12:55:54 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 12:55:56 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/* int	main(void)
{
	int	*r;
	int	i;

	r = ft_range(2, 7);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", r[i]);
		i++;
	}
	free(r);
	return (0);
} */
