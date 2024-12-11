#include <stdio.h>

void fib(int a, int b, int n, int stop)
{
    int x;
    if (n > stop)
    {
        return;
    }

    x = a+b;
    printf(" %d", x);
    fib(b, x, n+1, stop);
}

void read()
{
    int n;
    scanf("%d", &n);

    if (n==0)
    {
        return;
    }

    if (n==1)
    {
        printf("0\n");
    }
    else if (n==2)
    {
        printf("0 1\n");
    }
    else 
    {
        printf("0 1");
        fib(0, 1, 3, n);
        printf("\n");
    }

    read();
    
}

int main() {

    read();

    return 0;
}