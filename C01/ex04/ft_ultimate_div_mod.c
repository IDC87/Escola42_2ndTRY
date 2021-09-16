/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:14:02 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/09/14 17:13:48 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	if( *b !=)
	{
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;

	}

	printf("Resultado de a = %d\n", *a);

}

int main(void)
{
	int i = 50;
	int j = 2;

	int *ptr1;
	int	*ptr2;

	ptr1 = &i;
	ptr2 = &j;

	ft_ultimate_div_mod(ptr1, ptr2);






	return(0);
}
