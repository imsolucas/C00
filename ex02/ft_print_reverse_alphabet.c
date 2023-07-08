/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:51:43 by djin              #+#    #+#             */
/*   Updated: 2023/03/31 11:01:45 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while ('a' <= alphabet)
	{
		write (1, &alphabet, 1);
		alphabet-- ;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
