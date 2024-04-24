/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:23:08 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/30 20:49:13 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char h, char t, char u)
{
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	t = '0';
	u = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				ft_print_numbers(h, t, u);
				if (h < '7')
					write(1, ", ", 2);
				u++;
			}
			t++;
		}
		h++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
