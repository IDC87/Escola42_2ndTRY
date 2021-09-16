/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:46:11 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/09/14 21:30:54 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		if(i < n)
		{
		dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}

	return dest;

}

int main(int argc, char *argv[])
{
	printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2)
   {  
      printf("No argument passed through command line.\n");  
   }  
   else{  
      printf("First argument is: %s\n", argv[1]);  
   }  



	int j = 0;
	char src[] = "ORIGEM";
	char dest[] = "DESTINO!";

	unsigned int a;

	if(a = 3)
		char b = '3';
	if else(a = 4)
		char c = '4';



	

	ft_strncpy(dest, src, );

	while (dest[j] != '\0')
	{
		write(1, &dest[j], 1);
		j++;
	}

	return(0);
	}

