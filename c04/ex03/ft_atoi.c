/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:21:34 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/09 13:00:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + *str - '0';
		str++;
	}
	return ((int)(num * sign));
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("  \n \t---214748a3648"));
	printf("%d\n", ft_atoi(" a  -+-214748"));
	printf("%d\n", ft_atoi("   -+--10a22"));
}
*/
