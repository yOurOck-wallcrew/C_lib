/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:19:06 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 14:22:50 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>

// void	ft_print_result(const char *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

void *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned char *str;
    unsigned int counter;
    counter = 0;
    str = (unsigned char*) s;

    while (counter < n)
    {
        if (*str == c)
        {
            return (str);
        }
        str ++;
        counter ++;
    }
return (NULL);
}

// int		main(int argc, const char *argv[])
// {
// 	const char *str;
// 	int			arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		str = ft_memchr("bonjour", 'b', 4);
// 		if (!str)
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 2)
// 	{
// 		str = ft_memchr("bonjour", 'o', 7);
// 		if (!str)
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 3)
// 	{
// 		str = ft_memchr("bonjourno", 'n', 2);
// 		if (!str)
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 4)
// 	{
// 		str = ft_memchr("bonjour", 'j', 6);
// 		if (!str)
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 5)
// 	{
// 		str = ft_memchr("bonjour", 's', 7);
// 		if (!str)
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 6)
// 	{
// 		int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

// 		printf("%s", (char *)ft_memchr(tab, -1, 7));
// 	}
//        	return (0);
// }


// int main (void)
// {
// 	const char *str = "qwert";
// 	ft_memchr(str, 101, 2);
// 	return 0;
// }