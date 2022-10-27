/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:10:53 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/26 11:53:29 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s != '\0')
		s++;
	while (s >= start)
	{
		if (*((char *)s) == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}

/*
int main()
{
	char *a;
	printf("%s\n",ft_strrchr("hatirladim",'l'));
	printf("%s\n",ft_strrchr("hatirladiml",'l'));
	return (0);
}
*/