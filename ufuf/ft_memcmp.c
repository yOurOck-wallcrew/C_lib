/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:30:18 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 18:16:09 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
    char    *str3;
    char    *str4;

    str3 = (char *)str1;
    str4 = (char *)str2;
    while (n > 0)
    {
        if (*str3 != *str4)
        {
            return (*str3 - *str4);
        }
        n --;
        str3++;
        str4++;
    }
    return (0);
}
