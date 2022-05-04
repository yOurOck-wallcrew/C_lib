/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:52:53 by yarutiun          #+#    #+#             */
/*   Updated: 2022/05/03 17:15:23 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// int word_counter(char const *word, int words, char c)
// {
//     int counter;
//     counter = 0;

//     while (*word && word[counter] != '\0')
//     {
//         if(word[counter] == c)
//         {
//             words ++;
//             counter ++;
//         }

//         else
//         {
//             counter ++;
//         }
//     }
//     return (words);
// }

// char *word_duplication(const char *str, int beggining, int end)
// {
//     char *word;
//     int counter;
//     counter = 0;

//     word = malloc((end - beggining + 1) * sizeof(char));
//     while (beggining < end)
//     {
//         word[i] = str[beggining];
//         i++;
//         beggining++;
//     }
// word[i] = '\0';
// return (word);
// }

// char **ft_split(char const *s, char c)
// {
//     int i;
//     int j;
//     int index;
//     char **splited;
//     i = 0;
//     j = 0;
//     index = -1;

//     if (!s || !(split = malloc((word_counter(s, c) + 1) * sizeof(char *))))
//     {
//         return (0);
//     }

//     while(i < ft_strlen(s))
//     {
//         if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_duplication(s, index, i);
// 			index = -1;
// 		}
// 		i++;
//     }
//     split[j] = 0;
//     return (split);
// }
