/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:28:01 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/30 21:01:16 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void	ft_print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	rev_index;
	int	temp;

	index = 0;
	rev_index = size - 1;
	temp = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[rev_index];
		tab[rev_index] = temp;
		index++;
		rev_index--;
	}
}

/*int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(arr, 5);
	ft_print_array(arr, 5);
}*/
