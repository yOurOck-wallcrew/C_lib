/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:42:04 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 17:23:58 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char *ft_strtrim(char const *s1, char const *set)
// {
//     int start;
//     int length_to_malloc;
//     int end_of_set;
//     int counter;

//     counter = 0;
//     start = 0;
//     length_to_malloc = ft_strlen(s1);
//     end_of_set = length_to_malloc;

//     if (s1 == NULL)
//     {
//         return (NULL);
//     }

//     s1 = (const char *) malloc(length_to_malloc);

//     while(ft_is_space(set[start]) == 1)
//     {
//         start ++;
//     }

//     while(ft_is_space(set[end_of_set]) == 1)
//     {
//         end_of_set --;
//     }

//     while (s1[start] != s1[end_of_set])
//     {
//         s1[counter] = s1[start];
//         counter++;
//         start++;
//     }
//     return (s1);
// }