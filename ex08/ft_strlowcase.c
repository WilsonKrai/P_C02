/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:52:45 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 19:59:37 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
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

	ft_strlowcase(st1);
	ft_strlowcase(st2);
	ft_strlowcase(st3);
	ft_strlowcase(st4);

	printf("%s\n", st1);
	printf("%s\n", st2);
	printf("%s\n", st3);
	printf("%s\n", st4);	
}
*/
