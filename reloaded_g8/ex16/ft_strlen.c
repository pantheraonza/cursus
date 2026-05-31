/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:49:48 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:49:50 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		i++;
		size = size + 1;
	}
	return (size);
}

/* int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		return (1);
	}
	str = argv[1];
	printf("Original function: %lu\n", strlen(str));
	printf("Replicated function: %d\n", ft_strlen(str));
	return (0);
} */
