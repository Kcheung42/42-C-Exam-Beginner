#include <stdlib.h>
#include <stdio.h>

/* Must copy int to long to take care of Min int */


char	*ft_putnbr(long nbr, char *str)
{
	int c;

	if (nbr == 0)
		return (NULL);
	c = nbr % 10 + '0';
	ft_putnbr(nbr / 10, str);
	while( nbr /= 10)
		str++;
	*str = c;
	return (str);
}

int		digits(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
		count++;
	while(nbr != 0)
	{
		nbr /=  10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	char	*temp;
	long	cpy;

	cpy = (long)nbr;
	if (!(str = (char *)malloc(sizeof(char) * digits(cpy) + 1)))
		return (NULL);
	temp = str;
	if(cpy == 0)
	{
		*str = '0';
		return (temp);
	}
	else if (cpy < 0)
	{
		cpy = cpy * -1;
		*temp++= '-';
	}
	temp = ft_putnbr(cpy, temp);
	*++temp = '\0';
	return (str);
}




