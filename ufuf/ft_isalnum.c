/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:56:42 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 18:39:08 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 123 && c <= 127))
	{
		return (0);
	}
	else if ((c >= 91 && c <= 96))
	{
		return (0);
	}
	else if ((c >= 65 && 65 <= 90) || \
	(c >= 97 && c <= 122) || (c <= 57 && c >= 48))
	{
		return (1);
	}
	return (0);
}