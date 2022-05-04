/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:23:36 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 17:07:29 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char *ft_itoa(int n)
// {
//     int    comper;
//     int    fnumber;

//     comper = 1000000000;
//     while (n / comper < 1)
//     {
//         comper = comper / 10;
//     }
//     while (comper >= 1)
//     {
//         fnumber = n / comper + '0';
//         n = n - (n / comper * comper);
//         comper = comper / 10;
//     }
// }