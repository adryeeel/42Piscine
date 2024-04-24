/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:10:31 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/06 10:32:59 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", strncmp("adryelr", "adryel", 6));
	printf("%d\n", ft_strncmp("adryelr", "adryel", 6));
}*/
