/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:07:28 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/01 13:11:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha_lowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "AROCHA-B";
	char str2[] = "arocha-b";
	char str3[] = "--AaaA--";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
}*/
