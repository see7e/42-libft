/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrodri <gabrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:05:28 by gabrodri          #+#    #+#             */
/*   Updated: 2023/10/03 16:32:46 by gabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned int	ft_strlen(char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr)
	{
		ptr++;
	}
	return ((unsigned int)(ptr - str));
}
