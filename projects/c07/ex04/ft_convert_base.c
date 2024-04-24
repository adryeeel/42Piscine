/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:37:56 by arocha-b          #+#    #+#             */
/*   Updated: 2023/09/12 17:53:26 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_is_radix_valid(char *radix);
unsigned int	ft_strlen(char *str);
int				ft_atoi_base(char *str, char *base);
void			ft_rev_str(char *str, int size);

int	ft_number_len(long nbr, int base_size)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= base_size;
		len++;
	}
	return (len);
}

void	ft_split_to_str(char *dest, long num, char *base)
{
	long	quotient;
	long	remainder;
	int		base_size;

	base_size = ft_strlen(base);
	quotient = num / base_size;
	remainder = num % base_size;
	if (quotient != 0)
	{
		ft_split_to_str(dest, quotient, base);
		dest += ft_strlen(dest);
	}
	*dest = base[remainder];
	dest++;
	*dest = '\0';
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		number_len;
	char	*result;
	char	*o_result;

	num = (long)nbr;
	number_len = ft_number_len(num, ft_strlen(base));
	result = (char *)malloc(++number_len * sizeof(int));
	o_result = result;
	if (num < 0)
	{
		num *= -1;
		*result = '-';
		result++;
	}
	ft_split_to_str(result, num, base);
	*(result + number_len - 1) = '\0';
	return (o_result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	nbr_dec;

	if (!ft_is_radix_valid(base_from) || !ft_is_radix_valid(base_to))
		return (NULL);
	nbr_dec = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(nbr_dec, base_to);
	return (result);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
	char *res;

	if (argc != 4)
		return (0);
	res = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s", res);
	free(res);
}
*/
