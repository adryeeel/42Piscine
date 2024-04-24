/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:27:46 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 13:12:01 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d | ", ft_iterative_power(3, 3));
	printf("%d | ", ft_iterative_power(0 , 0));
	printf("%d", ft_iterative_power(0 , -1));
}
*/
