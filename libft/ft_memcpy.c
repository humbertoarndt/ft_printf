/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:02:50 by harndt            #+#    #+#             */
/*   Updated: 2022/04/10 17:12:13 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buf;

	if (dest == src || !n)
		return (dest);
	buf = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (buf);
}
