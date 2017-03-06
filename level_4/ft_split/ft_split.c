#include <stdlib.h>

char *ft_strsub(char *str, int start,  size_t len)
{
	char	*result;
	size_t	i;

	if(!str || !(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);

	i = 0;
	while (i < len)
	{
		result[i] = str[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}


int	ft_word_count(char *s)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		if (s[i])
		{
			while (s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
				i++;
			result++;
		}
	}
	return (result);
}


char	**ft_strsplit(char *str)
{
	char	**tab;
	int		i;
	int		n;
	int	start;

	if (!str || !(tab = (char **) malloc(sizeof(char *) * (ft_word_count(str) + 1))))
		return (NULL);
	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		else
		{
			start = i;
			while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
			tab[n] = ft_strsub(str, start, i - start);
			n++;
		}
	}
	tab[n] = 0;
	return (tab);
}

