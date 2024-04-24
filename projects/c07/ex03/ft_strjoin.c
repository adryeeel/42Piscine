/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:59:18 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/12 11:48:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len++])
		;
	return (--len);
}

unsigned int	ft_get_total_buffer(int size, char **strs, char *sep)
{
	unsigned int	total_buffer;

	total_buffer = 0;
	while (size-- > 0)
	{
		total_buffer += ft_strlen(*strs++);
		if (size != 0)
			total_buffer += ft_strlen(sep);
	}
	return (++total_buffer);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*o_src;
	char			*o_dest;
	unsigned int	cat_size;
	unsigned int	dest_len;

	o_src = src;
	o_dest = dest;
	dest_len = ft_strlen(dest);
	cat_size = size - dest_len;
	if (cat_size <= 0)
		return (dest_len + ft_strlen(src));
	while (*src && cat_size-- != 1)
		dest[dest_len++] = *src++;
	dest[dest_len] = '\0';
	return (ft_strlen(o_dest) + ft_strlen(src));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*joined_str;
	unsigned int	total_buffer;

	total_buffer = ft_get_total_buffer(size, strs, sep);
	joined_str = (char *)malloc(total_buffer * sizeof(char));
	*joined_str = '\0';
	while (size-- > 0)
	{
		ft_strlcat(joined_str, *strs++, total_buffer);
		if (size != 0)
			ft_strlcat(joined_str, sep, total_buffer);
	}
	return (joined_str);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc <= 2)
		return (0);
	printf("%s", ft_strjoin(argc - 2, argv + 2, argv[1]));
}*/
