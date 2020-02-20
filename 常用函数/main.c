#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char *strupr(char *src)
{  	
    char *str = NULL;
    str = src;
    
    while(*str != '\0')
    {  	
        if(*str >= 'a' && *str <= 'z')
        {
            *str -= 'a' - 'A';
        }
        
        str++;
    }
    printf("%c",str);
    return src;
}

void main() {
	*strupr("a");
}
