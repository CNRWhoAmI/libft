/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:03:36 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/26 11:52:26 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	if (c > 127)
		return (s);
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	if (c == 0)
		return (s);
	return (s);
}

/* int main()
{
	char *a;
	printf("%s",ft_strchr("hatirlandinmi",'m'));
	return (0);
}
 */