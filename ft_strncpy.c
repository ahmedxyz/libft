/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahmed <hahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:56:39 by hahmed            #+#    #+#             */
/*   Updated: 2017/10/05 10:39:13 by hahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = dst;
	while (src[i] && len > 0)
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		len--;
		i++;
	}
	return (tmp);
}
