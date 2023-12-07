/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:10:20 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/07 14:33:00 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n)
{
	if (n < 0)
	{
		ft_putchar_pf('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_pf(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_pf(n + '0');
}

// int main(void)
// {
// 	ft_putnbr_pf(322);
// 	return (0);
// }