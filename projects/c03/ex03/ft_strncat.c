/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:42:22 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/06 10:34:19 by arocha-b         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (i < nb && src[i])
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
	char *src = "Rocha";
	char dest[9] = "Adryel";
	char dest2[9] = "Adryel";

	printf("'%s' + '%s'", dest, src);
	ft_strncat(dest, src, 2);
	printf(" = '%s'", dest);

	printf("\n'%s' + '%s'", dest2, src);
	strncat(dest2, src, 2);
	printf(" = '%s'", dest2);
}*/
