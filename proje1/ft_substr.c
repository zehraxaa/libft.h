/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:16:44 by aaydogdu          #+#    #+#             */
/*   Updated: 2024/11/05 16:52:00 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	total;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup("")); // Başlangıç değeri dizinin sonundaysa boş bir string döner
	total = slen - start;
	if (total > len)
		total = len;
	str = (char *)malloc(sizeof(char) * (total + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, total + 1);
	return (str);
}

