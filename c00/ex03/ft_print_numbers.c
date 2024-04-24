/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:13:14 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/30 20:44:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c_n;

	c_n = '0';
	while (c_n <= '9')
	{
		write(1, &c_n, 1);
		c_n++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
