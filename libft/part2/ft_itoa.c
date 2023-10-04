/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrodri <gabrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:16 by gabrodri          #+#    #+#             */
/*   Updated: 2023/10/04 15:39:17 by gabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	start;
	size_t	end;
	char	temp;

	length = strlen(str);
	start = 0;
	end = length - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	size_t	length;

	length = 0;
	is_negative = (n < 0);
	// Assuming int has 32 bits, so 12 characters max
	str = char *)malloc(12 + is_negative);
	if (!(str))
		return (NULL);
	if (n == 0)
		str[length++] = '0';
	else
	{
		while (n != 0)
		{
			str[length++] = '0' + ft_abs(n % 10);
			n = n / 10;
		}
	}
	if (is_negative)
		str[length++] = '-';
	str[length] = '\0';
	ft_strrev(str);
	return (str);
}
