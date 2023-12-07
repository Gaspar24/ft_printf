/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:40:23 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/07 15:59:38 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr_pf(char *str) {
    while (*str != '\0') {
        ft_putchar_pf(*str);
        str++;
    }
}
// int main(void)
// {
// 	char str[] = "test";
// 	ft_putstr_pf(str);
// 	return (0);
// }