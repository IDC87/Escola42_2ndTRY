/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:03:44 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/09/14 18:56:32 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (dest[i] = src[i])
		i++;

/*	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

*/	return dest;



}

int main(void)
{
	int j = 0;
	char src[] = "Hello";
	char dest[] = "ola";

	ft_strcpy(dest, src);
	
	while (dest[j] != '\0')
	{
	write(1, &dest[j], 1);
	j++;
	}
	return(0);
}
