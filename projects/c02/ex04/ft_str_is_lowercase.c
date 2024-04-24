/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:54:34 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/01 10:59:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!verify_char(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	printf("%d", ft_str_is_lowercase("AaA"));
	printf("%d", ft_str_is_lowercase("aaa"));
}*/
