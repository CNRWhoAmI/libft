/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:56:03 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/26 11:56:28 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		((unsigned char *)str)[i++] = c;
	}
	return (str);
}

/*
int main()
{
	char a[] = "selam";
	char *s = (char *)ft_memset(a, 'n', 5);
	printf("%s",s);
}
// s dizesini n sayısı kadar c parametresi ile belirtilen
tek karakterlik char verisi ile değiştirmesi
*/