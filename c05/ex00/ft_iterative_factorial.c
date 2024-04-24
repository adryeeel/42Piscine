/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:13:46 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 13:10:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		fac *= nb--;
	return (fac);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
}
*/
