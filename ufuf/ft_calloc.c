/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:44:21 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 15:30:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <unistd.h>

void *ft_calloc(unsigned int count, unsigned int size)
{
	void *p;
	unsigned int calc_bytes;
	calc_bytes = (count * size);

	p = malloc(calc_bytes);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(p, calc_bytes);
		return (p);
	}
}

// int		main(int argc, const char *argv[])
// {
// 	char	*str;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		str = (char *)ft_calloc(30, 1);
// 		if (!str)
// 			write(1, "NULL", 4);
// 		else
// 			write(1, str, 30);
// 	}
// 	return (0);
// }