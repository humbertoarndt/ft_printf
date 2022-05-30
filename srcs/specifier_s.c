/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:38:59 by harndt            #+#    #+#             */
/*   Updated: 2022/05/30 18:06:07 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier_s(va_list arg_ptr)
{
	char	*string;
	int		length;

	string = va_arg(arg_ptr, char *);
	if (!string)
		string = "(null)";
	length = ft_strlen(string);
	ft_putstr(string);
	return (length);
}
