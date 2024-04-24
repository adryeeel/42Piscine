/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:24:27 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/06 10:33:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *src = "rocha";
	char dest[12] = "adryel";
	char dest2[12] = "adryel";

	printf("'%s' + '%s'", dest, src);
	ft_strcat(dest, src);
	printf(" = '%s'", dest);

	dest2[0] = 'a';

	printf("\n'%s' + '%s'", dest2, src);
	strcat(dest2, src);
	printf(" = '%s'", dest2);
}*/
