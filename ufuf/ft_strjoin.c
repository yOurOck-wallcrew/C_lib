/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:22:23 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 17:19:52 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char *ft_strjoin(char const *s1, char const *s2)
// {
//     char *s3;
//     int len_1;
//     int len_2;
//     int len_3;
//     int counter;
//     int counter2;
//     int counter3;

//     counter = 0;
//     len_1 = ft_strlen(s1);
//     len_2 = ft_strlen(s2);
//     len_3 = (len_1 + len_2);

//     if(!s1 || !s2)
//     {
//         return (NULL);
//     }

//     s3 = (char *) malloc(len_3);
//     while (s1 < '\0')
//     {
//         s1[counter] = s3[counter];
//         counter++;
//     }
    
//     counter3 = counter +1;
//     counter2 = 0;
    
//     while (s2 < '\0')
//     {
//         s2[counter2] = s3[counter3];
//         counter2++;
//         counter3++;
//     }
//     return (s3);
// }