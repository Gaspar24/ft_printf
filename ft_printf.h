/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:29:20 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/07 14:34:24 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// # define HEX_UPP_BASE "0123456789ABCDEF"
// # define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(const char *placheolder, ...);
int		ft_strlen_pf(char *s);
void	ft_putchar_pf(char c);
void	ft_putstr_pf(char *s);
void	ft_putnbr_pf(int n);

#endif