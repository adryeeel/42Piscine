/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:10:07 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/11 14:01:54 by arocha-b         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	return (max - min);
}

/*#include <stdio.h>

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
	int **range;
	int *p;

	if (argc != 3)
		return (0);

	range = &p;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = max - min;

	printf("Size: %d\n", ft_ultimate_range(range, min, max));
	ft_print(*range, size);
}
*/
