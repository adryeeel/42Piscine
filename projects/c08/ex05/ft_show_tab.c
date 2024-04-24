/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:12:53 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/13 18:04:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	char	c;
	long	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str - 1, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int main(void)
{
	struct s_stock_str av[] = {
		{ .str = "Adryel", .copy = "Adryel", .size = 6},
		{ .str = "Rocha", .copy = "Rocha", .size = 6},
		{ .str = 0, .copy = 0, .size = 0}
	};

	ft_show_tab(av);
}
*/
