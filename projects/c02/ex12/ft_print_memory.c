/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:03:23 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/07 11:18:11 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_dec_hex(unsigned long dec, int digits)
{
	char	c;
	int		remainder;

	if (digits == 0)
		return ;
	remainder = dec % 16;
	ft_convert_dec_hex(dec / 16, --digits);
	if (remainder < 10)
		c = remainder + '0';
	else
		c = remainder - 10 + 'a';
	write(1, &c, 1);
}

void	ft_fill_with_spaces(char *str)
{
	int		str_len;
	int		total_cur_len;
	int		total_to_print;
	int		total_content_len;

	str_len = 0;
	while (str[str_len++])
		;
	total_content_len = 16 * 2 + (16 / 2);
	total_cur_len = str_len * 2 + (str_len / 2);
	total_to_print = total_content_len - total_cur_len;
	if (str_len % 2 == 1)
		total_to_print--;
	while (total_to_print > 0)
	{
		write(1, " ", 1);
		total_to_print--;
	}
}

void	ft_print_content_hex(char *str)
{
	int	i;

	i = 0;
	while (i < 16 && str[i])
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		ft_convert_dec_hex((unsigned long)str[i], 2);
		i++;
	}
	if (i == 16)
		return ;
	if (str[i] == '\0')
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		ft_convert_dec_hex((unsigned long)str[i], 2);
	}
}

void	ft_print_content(char *str)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = 0;
	while (str[str_len++])
		;
	if (str_len < 16)
		ft_fill_with_spaces(str);
	while (i < 16 && str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			write(1, ".", 1);
			i++;
			continue ;
		}
		write(1, &str[i], 1);
		i++;
	}
	if (i == 16)
		return ;
	if (str[i] == '\0')
		write(1, ".", 1);
}

void	ft_print_memory(void *addr)
{
	char	*str;
	int		str_len;
	float	lines_amount;

	str_len = 0;
	str = (char *)addr;
	while (str[str_len++])
		;
	lines_amount = str_len / 16.0;
	while (lines_amount > 0)
	{
		ft_convert_dec_hex((unsigned long)addr, 16);
		write(1, ":", 1);
		ft_print_content_hex((char *)addr);
		write(1, " ", 1);
		ft_print_content((char *)addr);
		write(1, "\n", 1);
		addr += 16;
		lines_amount--;
	}
}

/*int	main(void)
{
	ft_print_memory("adryel\377rocha");
}*/
