/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:29:42 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 12:44:16 by arocha-b         ###   ########.fr       */
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

int	ft_is_radix_valid(char *radix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (radix[0] == '\0' || radix[1] == '\0')
		return (0);
	while (radix[i])
	{
		j = i + 1;
		if (radix[i] == '+' || radix[i] == '-')
			return (0);
		if (radix[i] < ' ' || radix[i] > '~')
			return (0);
		while (radix[j])
		{
			if (radix[i] == radix[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_ascii_to_int(char c, char *radix)
{
	int		index;
	char	*o_radix;

	index = 0;
	o_radix = radix;
	while (*radix && *radix++ != c)
		index++;
	if (radix - o_radix == index)
		return (-1);
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	long	num;
	int		sign;
	int		base_size;

	num = 0;
	sign = 1;
	if (!ft_is_radix_valid(base))
		return (0);
	base_size = ft_strlen(base);
	while (
		*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_ascii_to_int(*str, base) >= 0)
	{
		num = num * base_size + ft_ascii_to_int(*str, base);
		str++;
	}
	return ((int)(num * sign));
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d", ft_atoi_base(argv[1], argv[2]));
}*/
