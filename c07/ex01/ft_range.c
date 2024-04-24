/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:22:57 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/11 14:01:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	*o_arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	o_arr = arr;
	if (!arr)
		return (NULL);
	while (size-- > 0)
		*arr++ = min++;
	return (o_arr);
}
/*
#include <stdio.h>

void ft_print(int *arr, int size)
{
	int i;

	if (!arr)
	{
		printf("%s", (char *)arr);
		return;
	}

	i = 0;
	while (i < size)
		printf("%d", arr[i++]);
}

int main(int argc, char **argv)
{
	int min;
	int max;
	int size;

	if (argc != 3)
		return (0);

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = max - min;

	ft_print(ft_range(min, max), size);
}
*/
