/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:26:14 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 15:47:10 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, int n)
{
	unsigned char	*change;
	int				i;

	i = 0;
	change = (unsigned char *)ptr;
	while (i < n && *change)
	{
		*change = x;
		change ++;
		i ++;
	}
	return (ptr);
}
