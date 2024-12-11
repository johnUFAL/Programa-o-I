#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a+b<c || a+c<b || b+c<a)
    {
        printf("%s", "N");
    }
    else
    {
        printf("%s", "S");
    }

    return 0;
}