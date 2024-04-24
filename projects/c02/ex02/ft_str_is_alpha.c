/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:31:35 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/01 10:57:31 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
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
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("arocha"));
	printf("%d", ft_str_is_alpha("-0a0"));
}*/
