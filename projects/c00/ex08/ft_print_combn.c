/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:00:14 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/31 18:29:59 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_DIGITS_COMBINED 10

void	ft_print_array(char *arr, int size, int last_value)
{
	int	i;

	i = 0;
	if (arr[0] == last_value)
	{
		while (i < size)
			write(1, &arr[i++], 1);
		return ;
	}
	while (i < size)
		write(1, &arr[i++], 1);
	write(1, ", ", 2);
}

void	ft_find_first_and_last_values(char *first, char *last, int number_len)
{
	int	i;

	i = 0;
	while (i < number_len)
	{
		first[i] = i + '0';
		last[i] = (10 - number_len) + i + '0';
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	arr_number_digits[MAX_DIGITS_COMBINED];
	char	arr_final_number[MAX_DIGITS_COMBINED];
	int		rev;
	int		next_num;

	ft_find_first_and_last_values(arr_number_digits, arr_final_number, n);
	ft_print_array(arr_number_digits, n, arr_final_number[0]);
	while (arr_number_digits[0] != arr_final_number[0])
	{
		rev = n - 1;
		while (arr_number_digits[rev] == arr_final_number[rev])
		{
			rev--;
		}
		next_num = ++(arr_number_digits[rev]);
		while (rev < n - 1)
		{
			arr_number_digits[++rev] = ++next_num;
		}
		ft_print_array(arr_number_digits, n, arr_final_number[0]);
	}
}

/*int	main(void)
{
	ft_print_combn(3);
}*/
