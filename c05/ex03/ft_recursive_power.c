/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:35:53 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/11 12:05:04 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d | ", ft_recursive_power(3, 3));
	printf("%d | ", ft_recursive_power(0 , 0));
	printf("%d", ft_recursive_power(0 , -1));
}
*/
