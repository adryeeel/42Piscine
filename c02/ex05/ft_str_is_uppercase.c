/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:00:17 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/01 11:02:55 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
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
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("AaA"));
	printf("%d", ft_str_is_uppercase("AAA"));
}*/
