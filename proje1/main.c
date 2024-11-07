/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:01:49 by aaydogdu          #+#    #+#             */
/*   Updated: 2024/11/07 15:11:05 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{   //ft_atoi
    // printf("sonuç: %d\n", ft_atoi("+2345jljkh"));
    // printf("sonuç: %d\n", atoi("-124"));

    //ft_bzero
    // char str[] = "hello, world!";
    // int i = 0;
    // ft_bzero(str, 4);
    // while (i < sizeof(str))
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }

    //ft_calloc
    // int *int_arr;
    // char *char_arr;
    // int n = 5;
    // int i;
    // // `int` türünde 5 elemanlık dizi oluştur
    // int_arr = (int *)ft_calloc(n, sizeof(int));
    // printf("int_arr elemanları:\n");
    // while (i < 5)
    // {
    //     printf("int_arr[%d] = %d\n", i, int_arr[i]);
    //     i++;
    // }
    // // `char` türünde 10 elemanlık dizi oluştur
    // char_arr = (char *)ft_calloc(10, sizeof(char));
    // printf("\nchar_arr elemanları:\n");
    // i = 0;
    // while (i < 10)
    // {
    //     printf("char_arr[%d] = %d\n", i, char_arr[i]); // `char` değerleri int olarak yazdırılabilir
    //     i++;
    // }
    // free(int_arr);
    // free(char_arr);

    //ft_isalnum
    // printf("%d\n", ft_isalnum(65));
    // printf("%d\n", isalnum(65));

    //ft_isalpha
    //printf("%d\n", ft_isalpha('d'));

    //ft_isascii
    // printf("%d\n", ft_isascii(120));
    // printf("%d\n", isascii(120));

    //ft_isdigit
    //printf("%d\n", ft_isdigit(60));

    //ft_isprint
    //printf("%d\n", ft_isprint(123));

    //ft_strlen
    //printf("Uzunluk: %zu\n", ft_strlen("1234"));

    //ft_memset
    // char str[] = "hello, world!";
    // printf("sonuç: %s\n", ft_memset(str+4, 'x', 1));
    // printf("sonuç: %s\n", memset(str+4, 'x', 1));
    // int arr[] = {12, 14, 16, 18};
    // ft_memset(&arr[1], 1, 2);
    // ft_memset(&arr[1], 64, 1);

    // printf("sonuç: %d\n", arr[1]);

    //ft_memcpy
    //char src[] = "hello, world!";
    //printf("sonuç: %s\n", ft_memcpy(src+7, src, 6));

    //ft_memmove
    // char src[] = "hello, world!";
    // printf("sonuç: %s", ft_memmove(src+7,src,6));

    //ft_strlcpy
//     char src[] = "hello, world!";
//     char dest[] = "world!";
//     ft_strlcpy(dest, src, 13);
//     printf("%s\n", dest);
//     printf("%zu\n", ft_strlcpy(dest, src, 14));
//     printf("%s\n", dest);
//     printf("%s\n", dest);

    //ft_strlcat
    // char *dest;
    // dest[14] = 'a';
    // printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    //ft_strdup
    // char *str = "hello";
    // printf("%s\n", ft_strdup(str));
    // free(ft_strdup(str));

    
}
