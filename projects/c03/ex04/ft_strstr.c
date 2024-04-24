/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:21:41 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/06 19:06:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*found;
	int		to_find_len;

	found = NULL;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == to_find[0] && ft_strncmp(str, to_find, to_find_len) == 0)
		{
			found = str;
			break ;
		}
		str++;
	}
	return (found);
}

/*int	main(void)
{
	printf("%s\n", strstr("tteteste", "tt"));
	printf("%s", ft_strstr("tteteste", "tte"));
}*/
