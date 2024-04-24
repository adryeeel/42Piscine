/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 00:29:42 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 16:26:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_swap(char **arr, int index1, int index2)
{
	char	*temp;

	temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void	ft_sort(char **arr_str, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (ft_strcmp(arr_str[j], arr_str[j + 1]) > 0)
			{
				ft_swap(arr_str, j, j + 1);
				i = -1;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str - 1, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**inputs;

	i = 0;
	inputs = ++argv;
	ft_sort(inputs, argc - 1);
	while (i < argc - 1)
		ft_putstr(inputs[i++]);
}
