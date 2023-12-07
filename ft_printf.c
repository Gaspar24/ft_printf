/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:33:58 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/07 15:14:43 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *placheolder, ...)
{
	int	num_args;
	int	i;

	num_args = ft_strlen_pf((char *)placheolder);
	i = 0;
	va_list	args;
	va_start(args,placheolder);
	while(i < num_args)
	{
		if (placheolder[i] == '%')
			i++;
		if (placheolder[i] == 'c')
			ft_putchar_pf(va_arg(args, int));
		else if (placheolder[i] == 's')
			ft_putstr_pf(va_arg(args, char *));	
		else if(placheolder[i] == 'd')
			ft_putnbr_pf(va_arg(args, int));
		// else if(placheolder[i] == '\n')
		// 	write(1,"\n",1);
		i++;
	}
	
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("%d%d",4,3);
	write(1,"\n",1);
	ft_printf("%c%c%s",'t','c',"test");
	return (0);
}