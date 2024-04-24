/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:08:33 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 18:38:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

int	ft_is_radix_valid(char *radix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (radix[0] == '\0' || radix[1] == '\0')
		return (0);
	while (radix[i])
	{
		j = i + 1;
		if (radix[i] == '+' || radix[i] == '-')
			return (0);
		if (radix[i] < ' ' || radix[i] > '~')
			return (0);
		while (radix[j])
		{
			if (radix[i] == radix[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_split_print(long num, char *base)
{
	long	i;
	int		base_size;

	base_size = ft_strlen(base);
	if (num / base_size != 0)
	{
		ft_split_print(num / base_size, base);
	}
	i = num % base_size;
	write(1, &base[i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;

	num = (long) nbr;
	if (!ft_is_radix_valid(base))
		return ;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_split_print(num, base);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}*/
