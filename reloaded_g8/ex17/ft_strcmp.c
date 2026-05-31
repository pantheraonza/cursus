/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:52:06 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:52:08 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i = i + 1;
	}
	return (0);
}

/* int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (1);
	}
	printf("Original function: %d\n", strcmp(argv[1], argv[2]));
	printf("Replicated function: %d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
} */
