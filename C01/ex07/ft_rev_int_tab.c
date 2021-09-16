/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:03:15 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/09/14 17:58:42 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int j;
	int temp;
	int i;
	int a = size;

	j = 0;
	i = 0;

	while (i <= (size / 2))
	{

		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}

	

	while (j < a)	
	{		
	ft_putchar(tab[j] + 48);
//	printf("%d", tab[j]);
	j++;
	}

}

int main(void)
{
	int str[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(str, 5);

	return(0);


}
