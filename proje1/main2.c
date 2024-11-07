#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *s1 = "HELLO WORLD!";
    char *s2 = "hello world!";
    
    printf("%s\n", ft_strjoin(s1, s2));
}