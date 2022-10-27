/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:32:44 by ctoptas           #+#    #+#             */
/*   Updated: 2022/10/26 11:52:26 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (!dst && !src)
		return (0);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else if (src >= dst)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}

/*
int main()
{
	char a1[11] = "selamselam";
	const char a2[11] = "saminabiyo";
	
	ft_memmove(a1, a2, 5);
	printf("%s\n%s\n",a1,a2);
	return (0);
}
çakışmalar önlenir 
*/