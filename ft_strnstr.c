/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarst <pkarst@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:33:26 by pkarst            #+#    #+#             */
/*   Updated: 2024/12/16 14:19:09 by pkarst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*tofind)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (tofind[j] && str[i + j] == tofind[j] && i + j < len)
			j++;
		if (!tofind[j])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
