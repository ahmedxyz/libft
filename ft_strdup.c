/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahmed <hahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:30:49 by hahmed            #+#    #+#             */
/*   Updated: 2017/10/09 16:28:49 by hahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*d;

	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
