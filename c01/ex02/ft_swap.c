/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:43:31 by arocha-b          #+#    #+#             */
/*   Updated: 2023/08/29 13:18:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 10;
	b = 20;
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("%d %d", a, b);
}*/
