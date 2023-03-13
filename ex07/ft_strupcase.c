/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:46:52 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 17:46:54 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	st1[] = "testestestes#*&$)(*&)(**#ASDASD2131&(^.ds[f,";
	char	st2[] = "tetsetetsdgAsiuNAOIgd";
	char	st3[] = "28731914546534asdaAsdaSAd6";
	char	st4[] = "OWAINaiusdiasndSIUNDISAUND";

	ft_strupcase(st1);
	ft_strupcase(st2);
	ft_strupcase(st3);
	ft_strupcase(st4);

	printf("%s\n", st1);
	printf("%s\n", st2);
	printf("%s\n", st3);
	printf("%s\n", st4);	
}
*/