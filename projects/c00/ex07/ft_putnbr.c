/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:53:35 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/31 12:44:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	c;

	num = nb;
	if (num < 0)
	{
		c = '-';
		write(1, &c, 1);
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}*/
