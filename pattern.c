#include <stdio.h>
#include <string.h>

int main()
{
    char str[30]="hello world";
    int len = strlen(str);
    for (int i=0; i<=len; i++){
        printf("%.*s\n",i,str);
    }
}
