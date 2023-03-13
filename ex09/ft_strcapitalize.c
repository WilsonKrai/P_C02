/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:55:25 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 17:55:28 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
    int j;

	i = 0;
    j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        i++;
	}
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            while ((str[i + j] >= 'a' && str[i + j] <= 'z')
                    || (str[i + j] >= '0' && str[i + j] <= '9'))
            {
                j++;
            }
                str[i] = str[i] - 32;
                if (str[i - 1] >= '0' && str[i - 1] <= '9')
                    str[i] = str[i] + 32;
                i = i + j;
                j = 0;
        }
        i++;
    }
	return (str);
}

int	main(void)
{
	char	st1[] = "indsaim.s.s.s.s.s.s.s.s.s.s.s";
	char	st2[] = "123oi1m3i2mx.asidnams asoum,d.====";
	char	st3[] = "testes.sdfsdaa,awdaw,.sdasdas.d,as.da.";
	char	st4[] = "9wuionFrAase 2132313Normal para 4242testar se funca :>)";

	ft_strcapitalize(st1);
	ft_strcapitalize(st2);
	ft_strcapitalize(st3);
	ft_strcapitalize(st4);

	printf("%s\n", st1);
	printf("%s\n", st2);
	printf("%s\n", st3);
	printf("%s\n", st4);	
}
