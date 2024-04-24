/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:57:26 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 12:56:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str++)
		write(1, str - 1, 1);
}

/*
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putstr(argv[1]);
}
*/
