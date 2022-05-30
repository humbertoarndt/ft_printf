/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:33:09 by harndt            #+#    #+#             */
/*   Updated: 2022/05/30 18:03:54 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Assign the mandatory specifiers functions into an array.
 * @param specifiers An array with length 9.
**/
static void	assign_specifiers(t_specifier *specifiers)
{
	*specifiers++ = specifier_c;
	*specifiers++ = specifier_s;
	*specifiers++ = specifier_p;
	*specifiers++ = specifier_d;
	*specifiers++ = specifier_d;
	*specifiers++ = specifier_u;
	*specifiers++ = specifier_x;
	*specifiers++ = specifier_upperx;
	*specifiers++ = specifier_percent;
}

int	ft_printf(const char *format, ...)
{
	int			length;
	va_list		arg_ptr;
	t_specifier	specifiers[9];

	assign_specifiers(specifiers);
	length = 0;
	va_start(arg_ptr, format);
	while (*format)
	{
		if (*format == DELIMITER && ft_strnchr(FORMATS, *(format +1)) != -1)
			length += specifiers[ft_strnchr(FORMATS, *(++format))](arg_ptr);
		else
		{
			ft_putchar(*format);
			length++;
		}
		format++;
	}
	va_end(arg_ptr);
	return (length);
}
