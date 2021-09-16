/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:16:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/09/13 17:02:23 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{

	
	printf("Antes da troca: ");
	printf("%d, %d\n\n", *a, *b);

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


	printf("DEPOIS da troca: ");
	printf("%d, %d\n\n", *a, *b);


}

int main(void)
{
	int i = 2;
	int j = 5;

	int *ptr1;
	int *ptr2;

	ptr1 = &i;
	ptr2 = &j;

	ft_swap(ptr1, ptr2);


	return(0);

}
