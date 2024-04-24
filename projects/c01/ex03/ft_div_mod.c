/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:54:12 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/29 13:21:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	div = 0;
	mod = 0;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(10, 5, ptr_div, ptr_mod);
	printf("%d %d", div, mod);
}*/
