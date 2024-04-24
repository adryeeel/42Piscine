/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:53:47 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/30 21:03:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/

void	ft_switch_position(int *arr, int index)
{
	int	temp;

	temp = arr[index];
	arr[index] = arr[index + 1];
	arr[index + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur_smallest;
	int	index;
	int	rev_index;

	index = 0;
	rev_index = 0;
	cur_smallest = 0;
	while (index < size - 1)
	{
		if (tab[index] < tab[index + 1])
		{
			index++;
			continue ;
		}
		cur_smallest = tab[index + 1];
		ft_switch_position(tab, index);
		rev_index = index - 1;
		while (rev_index-- >= 0)
		{
			if (cur_smallest > tab[rev_index + 1])
				break ;
			ft_switch_position(tab, rev_index + 1);
		}
		index++;
	}
}

/*int	main(void)
{
	int arr[] = {10, 9, 8, 7};
	ft_sort_int_tab(arr, 4);
	ft_print_array(arr, 4);	
}*/
