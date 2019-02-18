/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:23:57 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/16 22:41:15 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	dest = ft_strnew(ft_strlen(src));
	if (dest)
		return (ft_strcpy(dest, src));
	else
		return (dest);
}