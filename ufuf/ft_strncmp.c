/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:17:47 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 15:50:25 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 || *s2 || counter < n)
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s2 > *s1)
		{
			return (-1);
		}
		counter ++;
		s1 ++;
		s2 ++;
	}
	return (0);
}
