/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:50:23 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/03 18:09:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	ft_str_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_tolower(str);
	while (str[i])
	{
		if (ft_is_alpha(str[i]) || ft_is_num(str[i]))
		{
			if (ft_is_alpha(str[i]))
				str[i++] -= 32;
			while (ft_is_alpha(str[i]) || ft_is_num(str[i]))
				i++;
		}
		if (!str[i])
			break ;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str);
	printf("%s", str);
}*/
