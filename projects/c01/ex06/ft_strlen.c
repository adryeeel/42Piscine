/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:29:49 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/30 21:04:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++]) 
		;
	return (--i);
}

/*int	main(void)
{
	char	*str;
	int	i;

	str = "Adryel";
	i = ft_strlen(str);
	printf("%d", i);
}*/
