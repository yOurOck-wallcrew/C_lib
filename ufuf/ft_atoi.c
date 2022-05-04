/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:06:26 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/04 15:45:44 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <unistd.h>

void	ft_print_result2(char c)
{
	write(1, &c, 1);
}

void	ft_print_result(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_print_result(n / 10);
		ft_print_result2(n % 10 + '0');
	}
	else
	{
		ft_print_result2('-');
		if (n <= -10)
			ft_print_result(n / -10);
		ft_print_result2(n % -10 * -1 + '0');
	}
}

int ft_atoi(const char *str)
{
    int res;
    int counter;
    counter = 0;
    res = 0;
    while (str[counter] != '\0')
    {
        res = res * 10 + (str[counter] - '0');
        counter ++;
    }
    return (res);
}

int main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_atoi("0"));
	else if (arg == 2)
		ft_print_result(ft_atoi("546:5"));
	else if (arg == 3)
		ft_print_result(ft_atoi("-4886"));
	else if (arg == 4)
		ft_print_result(ft_atoi("+548"));
	else if (arg == 5)
		ft_print_result(ft_atoi("054854"));
	else if (arg == 6)
		ft_print_result(ft_atoi("000074"));
	else if (arg == 7)
		ft_print_result(ft_atoi("+-54"));
	else if (arg == 8)
		ft_print_result(ft_atoi("-+48"));
	else if (arg == 9)
		ft_print_result(ft_atoi("--47"));
	else if (arg == 10)
		ft_print_result(ft_atoi("++47"));
	else if (arg == 11)
		ft_print_result(ft_atoi("+47+5"));
	else if (arg == 12)
		ft_print_result(ft_atoi("-47-5"));
	else if (arg == 13)
		ft_print_result(ft_atoi("\e475"));
	else if (arg == 14)
		ft_print_result(ft_atoi("\t\n\r\v\f  469 \n"));
	else if (arg == 15)
		ft_print_result(ft_atoi("-2147483648"));
	else if (arg == 16)
		ft_print_result(ft_atoi("2147483647"));
	else if (arg == 17)
		ft_print_result(ft_atoi("\t\n\r\v\fd469 \n"));
	else if (arg == 18)
		ft_print_result(ft_atoi("\n\n\n  -46\b9 \n5d6"));
	else if (arg == 19)
		ft_print_result(ft_atoi(""));
	return (0);
}
