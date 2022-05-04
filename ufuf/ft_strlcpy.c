/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:26:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/02 19:04:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter ++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *restrict dst, char *restrict src, unsigned int dstsize)
{
	int	counter;
	int ret;
	counter = 0;

	while (src || dst || dstsize > 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	ret = ft_strlen(src);
	return (ret - 1);
}
