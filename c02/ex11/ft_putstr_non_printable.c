/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:17:00 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/14 19:07:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int hex_value)
{
	char	c;

	if (hex_value < 10)
	{
		c = hex_value + '0';
		write(1, &c, 1);
		return ;
	}
	c = hex_value - 10 + 'a';
	write(1, &c, 1);
}

void	ft_convert_dec_hex(int dec, int digits)
{
	int	remainder;

	if (digits == 0)
		return ;
	remainder = dec % 16;
	ft_convert_dec_hex(dec / 16, --digits);
	ft_print_hex(remainder);
}

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
		{
			write(1, "\\", 1);
			ft_convert_dec_hex((unsigned char)str[i++], 2);
		}
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Adr\10yel");
}*/
