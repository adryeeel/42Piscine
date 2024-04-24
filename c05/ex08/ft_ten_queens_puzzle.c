/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:47:21 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/14 22:03:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *sol, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = sol[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_val_attack(int *pos, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (pos[i] == pos[n])
			return (1);
		if (pos[i] == pos[n] - (n - i) || pos[i] == pos[n] + (n - i))
			return (1);
		i++;
	}
	return (0);
}

void	ft_ten_queens_puzzle_rec(int *positions, int pos, int *sols)
{
	int	i;

	if (pos == 10)
	{
		ft_print(positions, pos);
		(*sols)++;
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			positions[pos] = i;
			if (!ft_val_attack(positions, pos))
				ft_ten_queens_puzzle_rec(positions, pos + 1, sols);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	sols;

	sols = 0;
	ft_ten_queens_puzzle_rec(positions, 0, &sols);
	return (sols);
}

/*int	main(void)
{
	return (ft_ten_queens_puzzle());
}*/
