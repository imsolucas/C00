/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:12:49 by djin              #+#    #+#             */
/*   Updated: 2023/03/31 11:03:30 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '0';
	c = '1';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_write(a, b, c);
				if (a != '7')
					write(1, ", ", 2);
				c++;
			}
	b++;
		}
a++;
	}
}

void	ft_write(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
