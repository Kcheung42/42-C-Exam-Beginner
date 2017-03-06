/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:13:00 by kcheung           #+#    #+#             */
/*   Updated: 2016/11/14 19:13:01 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void last_word(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if((str[i] == 32 || str[i] == 11 ) && str[i + 1] >= '!' && str[i + 1] <= '~')
            j = i + 1;
        i++;
    }
    while(str[j] >= '!' && str[j] <= '~')
    {
        write(1, &str[j], 1);
        j++;
    }
}

int main(int argc, char** argv)
{
    if(argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
