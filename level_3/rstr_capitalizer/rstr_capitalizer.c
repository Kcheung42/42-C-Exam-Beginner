/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 20:12:47 by kcheung           #+#    #+#             */
/*   Updated: 2016/11/21 20:12:48 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char ft_toUpper(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int ft_tolower(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

int ft_isEnd(char *argv)

{
	if(*(argv + 1) == ' ' || *(argv + 1) == '\t')
		return (1);
	return (0);
}
int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	argv++;
	while(*argv)
	{
		while(**argv)
		{
			if(**argv+1 == '\0'|| ft_isEnd(*argv))
				ft_putchar(ft_toUpper(**argv));
			else
				ft_putchar(ft_tolower(**argv));
			*argv += 1;
		}
		i = 0;
		argv++;
	}
	return (0);
}
