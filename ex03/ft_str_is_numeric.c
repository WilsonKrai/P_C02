/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:23:41 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/13 17:26:44 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	st2[] = "tetsetets22dgAsiuNAOIgd";
	char	st3[] = "287319145465346";
	char	st4[] = "";
	
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = ft_str_is_numeric(st1);
	i2 = ft_str_is_numeric(st2);
	i3 = ft_str_is_numeric(st3);
	i4 = ft_str_is_numeric(st4);

	printf("%d\n", i1);
	printf("%d\n", i2);
	printf("%d\n", i3);
	printf("%d\n", i4);	
}
*/