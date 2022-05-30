/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:28:38 by harndt            #+#    #+#             */
/*   Updated: 2022/05/30 18:04:27 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Include external libraries
# include <stdarg.h>
# include "libft.h"

// Defines
# define DELIMITER '%'
# define FORMATS "cspdiuxX%"
# define BIN 2
# define OCT 8
# define DEC 10
# define HEX 16

/**
 * @brief A type that receives a va_list.
 */
typedef int	(*t_specifier)(va_list);

/**
 * @brief The functions sends formatted output to stdout.
 * @param format the String that contains the text to be written to stdout.
 * It can optionally contain embedded format tags that are replaced by
 * values specified in subsequent additional arguments and formatted as
 * requested.
 * @return Upon success retuns the number of characters printed (excluding
 * the null byte used to end output to strings).On failure, a negative number
 * is returned.
 **/
int	ft_printf(const char *format, ...);

//Specifiers functions
/**
 * @brief Prints the content as a character and find it's length.
 * @param arg_ptr Va_list variables.
 * @return 1.
**/
int	specifier_c(va_list arg_ptr);

/**
 * @brief Prints the content as an int and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received.
**/
int	specifier_d(va_list arg_ptr);

/**
 * @brief Prints the content as a memory address and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received + 2.
**/
int	specifier_p(va_list arg_ptr);

/**
 * @brief Prints the content as a character '%' and find it's length.
 * @param arg_ptr Va_list variables.
 * @return 1.
**/
int	specifier_percent(va_list arg_ptr);

/**
 * @brief Prints the content as a String and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received.
**/
int	specifier_s(va_list arg_ptr);

/**
 * @brief Prints the content as an unsigned int and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received.
**/
int	specifier_u(va_list arg_ptr);

/**
 * @brief Prints the content as a hexadecimal (lower) and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received.
**/
int	specifier_upperx(va_list arg_ptr);

/**
 * @brief Prints the content as a hexadecimal (upper) and find it's length.
 * @param arg_ptr Va_list variables.
 * @return The length from the arg_ptr received.
**/
int	specifier_x(va_list arg_ptr);
#endif