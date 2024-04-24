/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:03:28 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/01 11:05:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_char(char c)
{
	if (c >= 32)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (verify_char(str[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("\n"));
	printf("%d", ft_str_is_printable("Aa0~"));
}*/
