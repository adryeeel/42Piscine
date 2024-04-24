/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:49:41 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/11 17:38:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_str_size(char *str)
{
	char	*o_str;

	o_str = str;
	while (*str++)
		;
	return (str - o_str);
}

char	*ft_strdup(char *src)
{
	char			*src_copy;
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_str_size(src);
	src_copy = (char *)malloc(src_size * sizeof(char));
	if (!src_copy)
		return (NULL);
	while (i < src_size)
		src_copy[i++] = *src++; 
	return (src_copy);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s", ft_strdup(argv[1]));
}
*/
