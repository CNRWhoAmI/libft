/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:58:02 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/26 11:55:27 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}

/*
char    change(unsigned int i, char c)
{
    c = c + 1;
    return c;
}

int main()
{
	char *str = "abc";
    char *str2 = ft_strmapi(str, change);
    printf("%s %s", str, str2);
    return (0);
}
// f de olan fonksiyonu stringin bütün elemanlarına uygular 
// sonucu yeni bir stringe atar
*/