/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 11:59:55 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 11:59:56 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* int	main(int argc, char **argv)
{
	char	*str;
	char	*replicated_function;
	char	*original_function;

	if (argc != 2)
	{
		return (1);
	}
	str = argv[1];
	replicated_function = ft_strdup(str);
	original_function = strdup(str);
	if (replicated_function == NULL || original_function == NULL)
	{
		printf("Malloc Error\n");
		return (1);
	}
	printf("REPLICATED FUNCTION\n");
	printf("Content : %s\n", replicated_function);
	printf("Address : %p\n\n", replicated_function);
	printf("ORIGINAL FUNCTION\n");
	printf("Content : %s\n", original_function);
	printf("Address : %p\n", original_function);
	free(replicated_function);
	free(original_function);
	return (0);
} */
