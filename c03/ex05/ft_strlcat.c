/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:53:51 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/07 11:35:26 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	char			*d;
	const char		*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

/*#include <stdio.h>

int main(void)
{
	int r;
	char *src = "Rocha";
	char dest[12] = "Adryel";

	printf("'%s' + '%s'", src, dest);
	r = ft_strlcat(dest, src, 12);
	printf(" = '%s' | %d", dest, r);
}*/
