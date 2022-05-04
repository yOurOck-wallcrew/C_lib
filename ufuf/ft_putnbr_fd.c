/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:48:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 17:10:33 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void    sub_print(int nb)
// {
//     int    comper;
//     int    fnumber;
//     int    fd;

//     comper = 1000000000;
//     while (nb / comper < 1)
//     {
//         comper = comper / 10;
//     }
//     while (comper >= 1)
//     {
//         fnumber = nb / comper + 48;
//         ft_putchar_fd(fnumber, fd);
//         nb = nb - (nb / comper * comper);
//         comper = comper / 10;
//     }
// }

// void    ft_putnbr(int nb, int fd)
// {
//     if (nb > 2147483647 || nb < -2147483648)
//     {
//         return ;
//     }
//     if (nb == 0)
//     {
//         ft_putchar_fd('0', fd);
//         return ;
//     }
//     else if (nb == -2147483648)
//     {
//         write(fd, "-2147483648", 11);
//         return ;
//     }
//     else if (nb > 0)
//     {
//         sub_print(nb);
//         return ;
//     }
//     else if (nb < 0)
//     {
//         ft_putchar('-');
//         nb = nb * (-1);
//         sub_print(nb);
//     }
// }
