#include <stdio.h>

int sonho(int n, int t)
{
    if (t==0)
    {
        return n;
    }

    int anterior = sonho(n, t-1);

    if (t%2!=0)
    {
        return anterior+3;
    }
    else
    {
        return anterior + (anterior%5);
    }
}

int main() {

    int n, t; 

    scanf("%d %d", &n, &t);

    int r = sonho(n, t);

    printf("%d", r);

    return 0;
}