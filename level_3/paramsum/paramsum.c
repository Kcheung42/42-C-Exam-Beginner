/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:04:12 by kcheung           #+#    #+#             */
/*   Updated: 2016/11/28 15:04:13 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	char c;

	if(n % 10 != n)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else
	{
		c = n + '0';
		ft_putchar(c);
	}
}

int main(int argc, char **argv)
{
	char **temp;
	
	temp = argv;
	ft_putnbr(argc-1);
	ft_putchar('\n');
	return(0);
}
