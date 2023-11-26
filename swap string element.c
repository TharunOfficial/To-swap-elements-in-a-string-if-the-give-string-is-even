#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    int b,c;
    gets(a);
    b=strlen(a);
    if(b%2==0)
    {
    for(int i=0;i<b-1;i+=2)
    {
        printf("%c%c",a[i+1],a[i]);
    }
    }

    return 0;
}

