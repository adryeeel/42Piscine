/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:30:18 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/13 18:03:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

char	*ft_strdup(char *src)
{
	char			*src_copy;
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen(src) + 1;
	src_copy = (char *)malloc(src_size * sizeof(char));
	if (!src_copy)
		return (NULL);
	while (i < src_size)
		src_copy[i++] = *src++;
	return (src_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].str = *av;
		arr[i].size = ft_strlen(*av);
		arr[i].copy = ft_strdup(*av);
		if (!arr[i].copy)
			return (NULL);
		i++;
		av++;
	}
	arr[i].str = 0;
	return (arr);
}
/*
#include <stdio.h>

void ft_show_tab(struct s_stock_str *par)
{
	int i;
	
	i = 0;
	while (par[i].str != 0)
	{
		printf("%s\n", par[i].str);
		printf("%s\n", par[i].copy);
		printf("%d\n", par[i].size);
		printf("------------------\n");
		i++;
	}
}

int main(int argc, char **argv) 
{
	struct s_stock_str *av;
	
	av = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(av);
	
	free(av);
}
*/
