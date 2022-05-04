/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:08:27 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/02 19:04:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
    char *allocated;
    int counter;
    if (len == 0)
    {
        return (NULL);
    }
    
    counter = 0;
    allocated = (char *) malloc(len);

    while (s[start] != s[len])
    {
        allocated[counter] = s[start];
        counter ++;
        start++;
    }
    return (allocated);
}
