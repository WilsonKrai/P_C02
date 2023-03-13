/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:40:10 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 17:40:13 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
				i++;
		else
		{
			r = 0;
			break ;
		}
	}
	return (r);
}
/*
int	main(void)
{
	char	st1[] = "testestestes#*&$)(*&)(**#&(^.ds[f,";
	char	st2[] = "tetsetetsdgAsiuNAOIgd";
	char	st3[] = "287319145465346";
	char	st4[] = "OWAINDOSIUNDISAUND";
	
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = ft_str_is_printable(st1);
	i2 = ft_str_is_printable(st2);
	i3 = ft_str_is_printable(st3);
	i4 = ft_str_is_printable(st4);

	printf("%d\n", i1);
	printf("%d\n", i2);
	printf("%d\n", i3);
	printf("%d\n", i4);	
}
*/