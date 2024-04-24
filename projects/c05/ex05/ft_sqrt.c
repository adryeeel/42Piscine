/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 23:16:49 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 22:32:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	dec;
	int	o_nb;
	int	square;

	dec = 1;
	o_nb = nb;
	square = 0;
	while (nb - dec >= 0)
	{
		nb -= dec;
		dec += 2;
		square++;
	}
	if (square * square == o_nb)
		return (square);
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	printf("%d", ft_sqrt(atoi(argv[1])));
}
*/
