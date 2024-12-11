#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a == b && b == c && c == a)
    {
        printf("%d", 1);
    }
    else if (a != b && b!= c && a != c)
    {
        printf("%d", 2);
    }
    else{
        printf("%d", 3);
    }

    return 0;
    
}